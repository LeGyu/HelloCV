cmake_minimum_required(VERSION 3.0)
project(UNIT_CONVERTER_LIB)
add_library(unitlib STATIC src/unitlib.cpp)
target_include_directories(unitlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)