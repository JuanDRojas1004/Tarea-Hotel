cmake_minimum_required(VERSION 3.30)
project(Hotel_Ejercicio)

set(CMAKE_CXX_STANDARD 20)

add_executable(Hotel_Ejercicio main.cpp
        Habitacion.cpp
        Habitacion.h
        Cliente.cpp
        Cliente.h
        Hotel.cpp
        Hotel.h)
