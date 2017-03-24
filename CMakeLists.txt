cmake_minimum_required(VERSION 3.6)
project(mySearch)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES driver.c mySearch.c mySearch.h)
add_executable(mySearch ${SOURCE_FILES})