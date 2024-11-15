#include "task/Inc/task.h" 
#include "stdio.h"

void task_idle( void )
{
  for (;;)
  {
    printf("IDLE");
  }

}
