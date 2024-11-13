cmake_minimum_required(VERSION 3.20)

project(RTOS
  VERSION 0.1
  DESCRIPTION "RTOS for really open source"
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(
  "${PROJECT_SOURCE_DIR}/core"
)

add_executable(rtos
  main.c 
  core/task/Src/task.c
  core/scheduler/Src/scheduler.c
)
