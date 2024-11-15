#include "task/Inc/task.h"
#include "task/Inc/queue/queue.h"
#include <stdlib.h>

extern const xTaskQueue_t* pxTaskQueue;

const xTask_t* task_find_by_id( taskID_t id )
{
  for( uint8_t i = 0; i < pxTaskQueue->ulSize; ++i )
  {
    if( id == pxTaskQueue->axTasks[ i ].id )
    {
      return &pxTaskQueue->axTasks[ i ];
    }

  }

  return NULL;
}


