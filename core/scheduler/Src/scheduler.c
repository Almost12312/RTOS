#include <stdint.h>
#include <stddef.h>
#include "scheduler/Inc/scheduler.h"

#define SCHEDULER_BEFORE_TASK_INDEX ( 0 )
#define SCHEDULER_AFTER_TASK_INDEX  ( 1 )

static xScheduler_t xScheduler;
static xTask_t* xCurrentTask;
static xTask_t* xBeforeAfterTasks[ 2 ];

void scheduler_init( const xTaskQueue_t* queue )
{
  xScheduler.xTaskQueue = queue;

  xCurrentTask = NULL;
  xBeforeAfterTasks[ SCHEDULER_BEFORE_TASK_INDEX ]  = NULL;
  xBeforeAfterTasks[ SCHEDULER_AFTER_TASK_INDEX ]   = NULL;
}

void scheduler_switch_to( taskID_t id )
{
  xBeforeAfterTasks[ SCHEDULER_AFTER_TASK_INDEX ] = task_find_by_id( id );
  
  

}

void scheduler_start( void )
{
  
}
