cmake_minimum_required(VERSION 3.16)

project(simple_factory LANGUAGES CXX)

add_executable(simple_factory client/Main.cpp)
target_compile_features(simple_factory PRIVATE cxx_std_17)
