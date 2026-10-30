cmake_minimum_required(VERSION 4.3)
project(Modules C)

set(CMAKE_C_STANDARD 11)

add_executable(Modules main.c
        chaines.c
        chaines.h)
