cmake_minimum_required(VERSION 3.20)
project(Adam_Cassidy_SD2A_C1)

set(CMAKE_CXX_STANDARD 17)

# Set SFML_DIR to the path where SFMLConfig.cmake is located
set(SFML_DIR "C:/SFML-3.0.0-windows-gcc-14.2.0-mingw-64-bit/lib/cmake/SFML")

find_package(SFML 3.0 REQUIRED graphics window system)


# Find SFML packages
find_package(SFML 3.0 COMPONENTS graphics window system REQUIRED)

# 🛠 This forces static linking and proper Console app for MinGW
set(CMAKE_EXE_LINKER_FLAGS "-static")

# Include directories
include_directories(
        ${CMAKE_SOURCE_DIR}/include
        ${SFML_INCLUDE_DIR}
)

# Source files
set(SOURCE_FILES
        src/main.cpp
        src/Grid.cpp
        src/Bug.cpp
        src/Ant.cpp
        src/Doodlebug.cpp
        src/Hopper.cpp
        src/GUI.cpp  # Add your GUI implementation
)

# Add executable
add_executable(Adam_Cassidy_SD2A_C1 src/main.cpp
        src/Grid.cpp
        src/Bug.cpp
        src/Ant.cpp
        src/Doodlebug.cpp
        src/Hopper.cpp
        src/GUI.cpp)

# Link SFML libraries
target_link_libraries(Adam_Cassidy_SD2A_C1
        sfml-graphics
        sfml-window
        sfml-system
)

# Copy assets to build directory (optional)
file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})