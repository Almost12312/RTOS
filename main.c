#include "scheduler/Inc/scheduler.h"
#include "task/Inc/queue/queue.h"
#include "task/Inc/task.h"
#include <stdio.h>

void init( void );

int main(void)
{
  printf("MAIN. INIT");
  
  init();

  scheduler_start();

  printf("MAIN. Scheduler close\n");
    
  return 0;
}

void init( void )
{
  scheduler_init(pxTaskQueue);
}

