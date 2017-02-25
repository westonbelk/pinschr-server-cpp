cmake_minimum_required(VERSION 3.6)
project(pinschr_server_cpp)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Monitorable.h MemoryMonitor.cpp MemoryMonitor.h UptimeMonitor.cpp UptimeMonitor.h)
add_executable(pinschr_server_cpp ${SOURCE_FILES})