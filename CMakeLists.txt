cmake_minimum_required(VERSION 2.8)
project(display)
find_package(OpenCV REQUIRED)
add_executable( display opcvtest.cpp)

target_link_libraries(display ${OpenCV_LIBS})

