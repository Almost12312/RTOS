#include "task/Inc/task.h"
#include <stdlib.h>

const xTaskQueue_t* xTaskQueue;

taskID_t task_new( taskPriority_t priority ) 
{
  /*free( ( xTaskQueue_t* ) xTaskQueue );*/
  /**/
  /*xTaskQueue = NULL;*/
  /**/
  /*xTaskQueue = malloc( sizeof( xTaskQueue_t ) );*/

}

xTask_t* task_find_by_id( taskID_t id )
{

  for( uint8_t i = 0; i < xTaskQueue->ulSize; ++i )
  {
    if( xTaskQueue->pxTasks[ i ].id == id )
    {
      return &xTaskQueue->pxTasks[ i ];
    }

  }

  return NULL;
}


