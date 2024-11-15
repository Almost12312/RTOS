#ifndef TASK_H
#define TASK_H

#include "stdbool.h"
#include <stdint.h>

typedef uint32_t taskID_t;
typedef uint32_t taskPriority_t;

typedef void ( *Run ) ( void );

typedef enum ReservedIDs 
{
  eReservedIDIdleTask,

  eReservedIDNullTask,

  eReservedIDFirstTask,

} eReservedIDs;

typedef struct Task
{
  bool isBlocked;
  bool isWaitingUnlock;

  taskID_t id;
  taskPriority_t priority;
  
  Run run;

} xTask_t; 

const xTask_t* task_find_by_id( taskID_t id );

void task_idle( void );

#endif // !TASK_H

