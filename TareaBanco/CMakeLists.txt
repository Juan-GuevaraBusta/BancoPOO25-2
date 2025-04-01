cmake_minimum_required(VERSION 3.30)
project(TareaBanco)

set(CMAKE_CXX_STANDARD 20)

add_executable(TareaBanco main.cpp
        Banco.cpp
        Banco.h
        Cuenta.cpp
        Cuenta.h)
