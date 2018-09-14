# to run the code
# $ mkdir build && cd build
# cmake ..
# make

cmake_minimum_required(VERSION 3.7.2) 
project(Test, LANGUAGES C)

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
	${INCLUDE_DIR}/mergeSort.h
	${SOURCE_DIR}/mergeSort.c
	${INCLUDE_DIR}/qsort3way.h
	${SOURCE_DIR}/qsort3way.c
	${INCLUDE_DIR}/qsortH.h
	${SOURCE_DIR}/qsortH.c
	${INCLUDE_DIR}/qsortL.h
	${SOURCE_DIR}/qsortL.c
	implementationCorrectness.c
)