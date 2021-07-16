cmake_minimum_required(VERSION 3.18)

set(c_sources
	${CMAKE_SOURCE_DIR}/src/hello.c
	PARENT_SCOPE)
set(c_headers hello.h)

add_library(hello SHARED hello.c)

set_target_properties(hello PROPERTIES CLEAN_DIRECT_OUTPUT 1)

install(TARGETS hello LIBRARY DESTINATION lib${LIB_SUFFIX} COMPONENT sharedlibs)
install( FILES ${c_headers} DESTINATION include/${PROJECT_NAME} COMPONENT headers)
