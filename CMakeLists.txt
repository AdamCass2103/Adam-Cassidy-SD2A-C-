cmake_minimum_required(VERSION 3.20)
project(Adam_Cassidy_SD2A_C1)

set(CMAKE_CXX_STANDARD 17)

# Set SFML path
set(SFML_ROOT "C:/Users/student/Desktop/SFML-2.6.2")  # Root SFML directory
set(SFML_DIR "${SFML_ROOT}/lib/cmake/SFML")

# Find SFML (use STATIC libraries for better portability)
set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

# Add executable
add_executable(Adam_Cassidy_SD2A_C1
        src/main.cpp
        src/Ant.cpp
        src/Bug.cpp
        src/Doodlebug.cpp
        src/Grid.cpp
        src/GUI.cpp
        src/Hopper.cpp

)
file(COPY
        assets/textures/ant.png
        assets/textures/grass.png
        assets/textures/doodlebug.png
        assets/textures/hopper.png
        DESTINATION ${CMAKE_BINARY_DIR}/textures
)
# Copy assets
file(COPY assets/textures/ DESTINATION ${CMAKE_BINARY_DIR}/assets/textures)
file(COPY assets/fonts/ DESTINATION ${CMAKE_BINARY_DIR}/assets/fonts)

target_include_directories(Adam_Cassidy_SD2A_C1 PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${SFML_INCLUDE_DIR}
)

# Link libraries (updated order)
target_link_libraries(Adam_Cassidy_SD2A_C1
        sfml-graphics
        sfml-window
        sfml-system
        opengl32

        winmm
        gdi32
)

# Copy DLLs (if using dynamic linking)
if(NOT SFML_STATIC_LIBRARIES AND WIN32)
    add_custom_command(TARGET Adam_Cassidy_SD2A_C1 POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            "${SFML_ROOT}/bin/sfml-graphics-2.dll"
            "${SFML_ROOT}/bin/sfml-window-2.dll"
            "${SFML_ROOT}/bin/sfml-system-2.dll"
            $<TARGET_FILE_DIR:Adam_Cassidy_SD2A_C1>
    )
endif()