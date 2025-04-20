cmake_minimum_required(VERSION 3.21)
project(ABugsLife)

set(CMAKE_CXX_STANDARD 17)

add_executable(ABugsLife
        main.cpp
        Bug.cpp Ant.cpp Doodlebug.cpp Grid.cpp
)
