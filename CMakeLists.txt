cmake_minimum_required(VERSION 3.4.1)

project(snippets)

set(INCLUDE_DIR "./inc")
message(STATUS ${INCLUDE_DIR})
message(STATUS ${PROJECT_SOURCE_DIR})

include_directories(
    ${INCLUDE_DIR}
)

file(GLOB SRCS "src/*.cpp")
add_executable(test ${SRCS})
target_link_libraries(test -lpthread)
