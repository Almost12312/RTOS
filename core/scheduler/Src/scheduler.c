#include <stdint.h>
#include <stddef.h>
#include "scheduler/Inc/scheduler.h"
#include "config/main_config.h"
#include "task/Inc/queue/queue.h"
#include "task/Inc/task.h"

extern const xTaskQueue_t* pxTaskQueue;

static xScheduler_t xScheduler;
static xTask_t* xCurrentTask;

void scheduler_init( const xTaskQueue_t* queue )
{
  xScheduler.xTaskQueue = queue;

  xCurrentTask = NULL;
}


void scheduler_start( void )
{
  taskID_t i = eReservedIDFirstTask;

  while( true )
  {

    if( i == MAX_TASKS )
    {
      i = eReservedIDFirstTask;
      
    } else 
    {
      ++i;
    }
  }
  
}
