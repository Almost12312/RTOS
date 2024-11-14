#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <stdint.h>
#include "task/Inc/task.h"
#include "task/Inc/queue/queue.h"

#define SCHEDULER_BEFORE_TASK_INDEX ( 0 )
#define SCHEDULER_AFTER_TASK_INDEX  ( 1 )

typedef struct Scheduler 
{
  const xTaskQueue_t* xTaskQueue;

} xScheduler_t;

void scheduler_init( const xTaskQueue_t* queue );
void scheduler_start( void );

taskID_t scheduler_find_next( void );

#endif // !SCHEDULER_H

