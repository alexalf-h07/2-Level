cmake_minimum_required(VERSION 3.10)
project(SortLibraryProject)


set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)


add_library(sortings_lib SHARED sortings.cpp)


add_executable(my_app main.cpp)

target_link_libraries(my_app sortings_lib)