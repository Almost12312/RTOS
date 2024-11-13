#ifndef TASK_H
#define TASK_H

#include "stdbool.h"
#include <stdint.h>

typedef uint32_t taskID_t;
typedef uint32_t taskPriority_t;

typedef enum ReservedIDs 
{
  eReservedIDNullTask,
  eReservedIDIdleTask,

} eReservedIDs;

typedef struct Task
{
  bool isBlocked;
  taskID_t id;
  taskPriority_t priority;
  
  void (*pFunction) (void);

} xTask_t; 


typedef struct TaskQueue
{
  xTask_t* pxTasks;
  uint32_t ulSize;

} xTaskQueue_t;

extern const xTaskQueue_t* xTaskQueue; 

taskID_t task_new( taskPriority_t priority );

xTask_t* task_find_by_id( taskID_t id );

void task_idle( void );

#endif // !TASK_H

