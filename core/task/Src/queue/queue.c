#include "stddef.h"
#include "task/Inc/queue/queue.h"

static xTaskQueue_t xTaskQueue = { .ulSize = MAX_TASKS };

const xTaskQueue_t* pxTaskQueue = NULL;

void task_queue_change_set_waiting( taskID_t id )
{
  for( taskID_t i = eReservedIDFirstTask; i < MAX_TASKS; ++i )
  {
    if( id == xTaskQueue.axTasks[ i ].id )
    {
      xTaskQueue.axTasks[ i ].isWaitingUnlock = true;
    }
  }
}
