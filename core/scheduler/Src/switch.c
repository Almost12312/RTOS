#include "config/main_config.h"
#include "scheduler/Inc/scheduler.h"
#include "task/Inc/task.h"
#include <stdint.h>
#include <string.h>

extern const xTaskQueue_t* pxTaskQueue;

static xTask_t xCurrentTask;

const xTask_t* pxCurrentTask = &xCurrentTask;

taskID_t scheduler_find_next( void )
{
  const xTask_t* xIterationTask = NULL;

  const taskID_t  currentID = xCurrentTask.id;
  taskID_t        targetID = eReservedIDIdleTask;
  
  taskID_t waitUnlockID = eReservedIDNullTask;

  for( taskID_t i = eReservedIDFirstTask; i < MAX_TASKS; ++i ) 
  {
    xIterationTask = &pxTaskQueue->axTasks[ i ]; 

    if( currentID != xIterationTask->id )
    {
      if( xIterationTask->id == false )    
      {
        targetID = xIterationTask->id;
      }

      if( xIterationTask->isWaitingUnlock == true )
      {
        waitUnlockID = xIterationTask->id; 
      }
    }
  }

  if( waitUnlockID != eReservedIDNullTask )
  {
    targetID = waitUnlockID; 
  } 

  return targetID;
}
