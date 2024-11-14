#ifndef INCLUDE/home/user/c_projects/RTOS/core/task/Inc/queuequeuequeue.h_
#define INCLUDE/home/user/c_projects/RTOS/core/task/Inc/queuequeuequeue.h_

#include "config/main_config.h"
#include "task/Inc/task.h"

typedef struct TaskQueue
{
  xTask_t axTasks[ MAX_TASKS ];
  uint32_t ulSize;

} xTaskQueue_t;

extern const xTaskQueue_t* pxTaskQueue; 

void task_queue_change_set_waiting( taskID_t id );

#endif  // INCLUDE/home/user/c_projects/RTOS/core/task/Inc/queuequeuequeue.h_
