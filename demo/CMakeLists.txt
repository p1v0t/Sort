cmake_minimum_required(VERSION 3.7.2) 
project(BubbleTest, LANGUAGES C)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORGE)
endif()
 
set(CMAKE_C_STANDARD 11)
set(CMAKE_CFLAGS "$(CMAKE_C_FLAGS) --std=c11 -Wall")

set(INCLUDE_DIR ../../inc)
set(SOURCE_DIR ../../src)
set(DATA_DIR ../../data)

include_directories(${INCLUDE_DIR} ${DATA_DIR} ${SOURCE_DIR})
add_executable (output ${INCLUDE_DIR}/qsort3way.h ${INCLUDE_DIR}/utils.h ${SOURCE_DIR}/qsort3way.c demo.c)