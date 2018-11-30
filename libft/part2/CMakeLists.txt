cmake_minimum_required(VERSION 3.5)
project(part2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(part2
        ft_itoa.c
        ft_strnew.c
        bzero.c
        ../strdup.c
        ../ft_putstr.c
        ../ft_putchar.c)
