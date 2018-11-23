cmake_minimum_required(VERSION 3.12)
project(libft C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(libft
        atoi.c
        isalpha.c
        isalphanum.c
        isascii.c
        isdigit.c
        isprint.c
        library.h
        strlen.c
        testing.c
        toupper.c)
