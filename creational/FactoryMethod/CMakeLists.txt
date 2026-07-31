cmake_minimum_required(VERSION 3.16)

project(factory_method LANGUAGES CXX)

add_executable(factory_method client/Main.cpp)
target_compile_features(factory_method PRIVATE cxx_std_17)
