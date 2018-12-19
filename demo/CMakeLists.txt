cmake_minimum_required(VERSION 3.7.2)
project(Demo, LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CFLAGS "$(CMAKE_C_FLAGS) --std=c11 -Wall")

set(INCLUDE_DIR ../inc)
set(SOURCE_DIR ../src)
set(DATA_DIR ../data)

file(COPY ${DATA_DIR}/GDP.dat DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

include_directories(${INCLUDE_DIR} ${DATA_DIR} ${SOURCE_DIR})
add_executable (output
  ${INCLUDE_DIR}/utils.h
  ${SOURCE_DIR}/utils.c
  ${INCLUDE_DIR}/qsort3way.h
  ${SOURCE_DIR}/qsort3way.c
  demo.c
)


