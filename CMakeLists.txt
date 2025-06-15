cmake_minimum_required(VERSION 3.31)
project(crc8_impl C)

set(CMAKE_C_STANDARD 11)

add_executable(crc8_impl main.c
        library.c)
