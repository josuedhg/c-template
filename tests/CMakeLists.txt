find_package(cmocka)

enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/src)

set(c_tests tests.c)

add_definitions(-DUNIT_TESTING=ON)

add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND})
add_executable(sample_test ${c_tests} ${c_sources})

target_link_libraries(sample_test cmocka)

add_test(NAME firstTests
	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
	COMMAND sample_test)
add_dependencies(check sample_test)
