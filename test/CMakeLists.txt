cmake_minimum_required(VERSION 3.7.2) 
project(BubbleTest, LANGUAGES C)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORGE)
endif()
 
set(CMAKE_C_STANDARD 11)
set(CMAKE_CFLAGS "$(CMAKE_C_FLAGS) --std=c11 -Wall")

set(INCLUDE_DIR ../inc)
set(SOURCE_DIR ../src)

include_directories(${INCLUDE_DIR})
add_executable (output 
	${INCLUDE_DIR}/utils.h
	${SOURCE_DIR}/utils.c
	${INCLUDE_DIR}/bubble.h
	${SOURCE_DIR}/bubble.c
	${INCLUDE_DIR}/cocktail.h
	${SOURCE_DIR}/cocktail.c
	${INCLUDE_DIR}/comb.h
	${SOURCE_DIR}/comb.c
	${INCLUDE_DIR}/gnome.h
	${SOURCE_DIR}/gnome.c
	${INCLUDE_DIR}/heapSort.h
	${SOURCE_DIR}/heapSort.c
	${INCLUDE_DIR}/insertion.h
	${SOURCE_DIR}/insertion.c
	${INCLUDE_DIR}/shell.h
	${SOURCE_DIR}/shell.c
	${INCLUDE_DIR}/selection.h
	${SOURCE_DIR}/selection.c
	${INCLUDE_DIR}/qsort3way.h
	${SOURCE_DIR}/qsort3way.c
	implementationCorrectness.c
)