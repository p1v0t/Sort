add_executable(implementation_correctness_test main.c)

target_link_libraries(implementation_correctness_test
                      PRIVATE insertionSort
                              bogo
                              bubble
                              cocktail
                              comb
                              gnome
                              heapSort
                              mergeSort
                              qsort3way
                              qsortH
                              qsortL
                              selection
                              shell)

target_include_directories(implementation_correctness_test PRIVATE ${CMAKE_SOURCE_DIR}/inc)
