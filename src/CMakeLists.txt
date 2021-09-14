cmake_minimum_required(VERSION 3.18)

file(GLOB c_sources ${CMAKE_SOURCE_DIR}/src/*.c)
file(GLOB c_headers ${CMAKE_SOURCE_DIR}/src/*.h)

add_library(hello SHARED ${c_sources})

set_target_properties(hello PROPERTIES CLEAN_DIRECT_OUTPUT 1)

install(TARGETS hello LIBRARY DESTINATION lib${LIB_SUFFIX} COMPONENT sharedlibs)
install( FILES ${c_headers} DESTINATION include/${PROJECT_NAME} COMPONENT headers)
