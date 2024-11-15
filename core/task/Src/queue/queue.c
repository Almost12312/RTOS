#include "task/Inc/queue/queue.h"
#include "config/main_config.h"
#include "task/Inc/task.h"
#include "stddef.h"
#include <stdbool.h>

static xTaskQueue_t xTaskQueue;

const xTaskQueue_t* pxTaskQueue = &xTaskQueue;

void task_queue_init( void ) 
{
  xTaskQueue.ulSize = MAX_TASKS;

  for( taskID_t i = 0; i < MAX_TASKS; ++i ) 
  {
    xTaskQueue.axTasks[ i ].run = NULL;
    xTaskQueue.axTasks[ i ].id = eReservedIDNullTask;
    xTaskQueue.axTasks[ i ].priority = 0;
    xTaskQueue.axTasks[ i ].isBlocked = false;
    xTaskQueue.axTasks[ i ].isWaitingUnlock = false;
  }
}

void task_queue_create_task( Run run, taskPriority_t priority )
{
  for( taskID_t i = 0; i < MAX_TASKS; ++i ) 
  {
  }
}

void task_queue_change_set_waiting( taskID_t id )
{
  for( taskID_t i = 0; i < MAX_TASKS; ++i )
  {
    if( id == xTaskQueue.axTasks[ i ].id )
    {
      xTaskQueue.axTasks[ i ].isWaitingUnlock = true;
    }
  }
}
