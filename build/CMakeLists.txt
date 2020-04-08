cmake_minimum_required(VERSION 2.8)

project(LexiApp)

aux_source_directory(../src DIR_SRCS)

add_executable(LexiApp ${DIR_SRCS})
