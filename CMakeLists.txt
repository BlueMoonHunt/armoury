cmake_minimum_required(VERSION 3.30.0)

project(armoury VERSION 0.0.1 LANGUAGES C CXX)

add_library(${PROJECT_NAME} STATIC uuid.cpp)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_23)