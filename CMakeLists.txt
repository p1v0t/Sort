cmake_minimum_required(VERSION 3.14)
project(Sort LANGUAGES C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(insertionSort src/utils.c src/insertion.c)
target_include_directories(insertionSort PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(bogo src/utils.c src/bogo.c)
target_include_directories(bogo PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(bubble src/utils.c src/bubble.c)
target_include_directories(bubble PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(cocktail src/utils.c src/cocktail.c)
target_include_directories(cocktail PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(comb src/utils.c src/comb.c)
target_include_directories(comb PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(gnome src/utils.c src/gnome.c)
target_include_directories(gnome PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(heapSort src/utils.c src/heapSort.c)
target_include_directories(heapSort PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(mergeSort src/utils.c src/mergeSort.c)
target_include_directories(mergeSort PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(qsort3way src/utils.c src/qsort3way.c)
target_include_directories(qsort3way PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(qsortH src/utils.c src/qsortH.c)
target_include_directories(qsortH PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(qsortL src/utils.c src/qsortL.c)
target_include_directories(qsortL PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(selection src/utils.c src/selection.c)
target_include_directories(selection PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_library(shell src/utils.c src/shell.c)
target_include_directories(shell PRIVATE ${CMAKE_SOURCE_DIR}/inc)

add_subdirectory(demo)
add_subdirectory(test)
