cmake_minimum_required(VERSION 3.8)
project(glog_test)

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

set(CMAKE_CXX_STANDARD 14)

add_executable(glog_test main.cpp)
target_link_libraries(glog_test ${CONAN_LIBS})
