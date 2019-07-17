
add_executable(insertion_sort_demo main.c)
target_link_libraries(insertion_sort_demo PRIVATE insertionSort)
target_include_directories(insertion_sort_demo PRIVATE ${CMAKE_SOURCE_DIR}/inc)
