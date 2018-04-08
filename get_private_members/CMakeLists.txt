cmake_minimum_required(VERSION 3.5)
project(GetPrivateMember)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")


set(LIBRARY_SRC secret.cpp)
add_library(secret SHARED ${LIBRARY_SRC})


set(SOURCE_FILES main.cpp)
add_executable(main ${SOURCE_FILES})

target_include_directories(main PUBLIC ".")
target_link_libraries(main PRIVATE secret)
