cmake_minimum_required(VERSION 2.8)


if(NOT CPPTORCH_FOUND)
  find_package(cpptorch REQUIRED)
endif()


set(demo_SRC "main.cpp")
add_executable(cpptorch_demo ${demo_SRC})
target_include_directories(cpptorch_demo PRIVATE ${CPPTORCH_INCLUDE_DIR})
target_link_libraries(cpptorch_demo ${CPPTORCH_LIBRARIES})

