cmake_minimum_required(VERSION 3.16)
project(Data_Exchange LANGUAGES C)

file(GLOB Data_Exchange_Sources *.c *.h)
add_library(Data_Exchange ${Data_Exchange_Sources})
