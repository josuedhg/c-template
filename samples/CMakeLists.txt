
set(sample_src sample.c)
add_executable(sample ${sample_src})
target_include_directories(sample PRIVATE ${CMAKE_SOURCE_DIR}/samples)
target_link_libraries(sample LINK_PUBLIC hello)
