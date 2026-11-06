cmake_minimum_required(VERSION 4.3)
project(AlgosSurTableau C)

set(CMAKE_C_STANDARD 11)

add_executable(AlgosSurTableau main.c
        fouille.c
        fouille.h)
