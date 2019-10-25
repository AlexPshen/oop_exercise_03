cmake_minimum_required(VERSION 3.5)

project(oop_exercise_03)

add_executable(oop_exercise_03
               main.cpp
               rectangle.cpp
               point.cpp
               trigon.cpp
               quadrate.cpp
)

set_property(TARGET oop_exercise_03 PROPERTY CXX_STANDARD 11)
