cmake_minimum_required(VERSION 3.5)
project(part2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(part2
        ft_strnew.c
        ../ft_bzero.c
        ft_strtrim.c
        ../ft_strlen.c
        )
