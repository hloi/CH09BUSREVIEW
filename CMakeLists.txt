cmake_minimum_required(VERSION 3.27)
project(CH09BUSREVIEW)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH09BUSREVIEW main.cpp
        Review.cpp
        Review.h
        ReviewList.cpp
        ReviewList.h)
