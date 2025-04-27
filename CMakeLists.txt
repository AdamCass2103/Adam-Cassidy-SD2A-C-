cmake_minimum_required(VERSION 3.20)
project(Adam_Cassidy_SD2A_C1)

set(CMAKE_CXX_STANDARD 17)

#
# If you specifically need your desktop path:
 set(SFML_DIR "C:/Users/student/Desktop/SFML-2.6.2/SFML-2.6.2/lib/cmake/SFML")

# Find SFML components
find_package(SFML 2.6  COMPONENTS graphics window system REQUIRED)

# CLion-specific runtime configuration
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Add all source files (relative to CMakeLists.txt)
add_executable(Adam_Cassidy_SD2A_C1
        src/main.cpp
        src/Ant.cpp
        src/Doodlebug.cpp
        src/Bug.cpp
        src/Grid.cpp
        src/GUI.cpp
        src/Hopper.cpp
)

# Include directories
target_include_directories(Adam_Cassidy_SD2A_C1 PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${SFML_INCLUDE_DIR}
)

# Link SFML libraries
target_link_libraries(Adam_Cassidy_SD2A_C1
        sfml-graphics
        sfml-window
        sfml-system
)

# Windows-specific: Copy DLLs to build directory
if(WIN64)
    add_custom_command(TARGET Adam_Cassidy_SD2A_C1 POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            "${SFML_DIR}/../../../bin/sfml-graphics-2.dll"
            "${SFML_DIR}/../../../bin/sfml-window-2.dll"
            "${SFML_DIR}/../../../bin/sfml-system-2.dll"
            $<TARGET_FILE_DIR:Adam_Cassidy_SD2A_C1>
            COMMENT "Copying SFML DLLs to output directory"
    )
endif()

# Copy resource files (bugs.txt and assets)
file(COPY
        bugs.txt
        DESTINATION ${CMAKE_BINARY_DIR}
)

file(COPY
        assets/
        DESTINATION ${CMAKE_BINARY_DIR}/assets
)