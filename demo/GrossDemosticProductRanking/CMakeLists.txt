file(COPY ${CMAKE_SOURCE_DIR}/data/GDP.dat DESTINATION 
	${CMAKE_BINARY_DIR}/demo/GrossDemosticProductRanking)

add_executable (GDP_rank_demo main.c)

target_include_directories(GDP_rank_demo PRIVATE ${CMAKE_SOURCE_DIR}/inc)
target_link_libraries(GDP_rank_demo PRIVATE qsort3way)

