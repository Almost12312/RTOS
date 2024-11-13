#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <stdint.h>
#include "task/Inc/task.h"

typedef struct Scheduler 
{
  const xTaskQueue_t* xTaskQueue;

} xScheduler_t;

void scheduler_init( const xTaskQueue_t* queue );
void scheduler_start( void );

void scheduler_switch_to( taskID_t id );

#endif // !SCHEDULER_H

