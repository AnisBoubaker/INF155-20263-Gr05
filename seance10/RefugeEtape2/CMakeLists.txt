cmake_minimum_required(VERSION 4.3)
project(RefugeEtape2 C)

set(CMAKE_C_STANDARD 11)

add_executable(RefugeEtape2 main.c
        animal.c
        animal.h
        refuge.c
        refuge.h)
