cmake_minimum_required(VERSION 3.16)
project(LibraryLab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SFML_DIR "${CMAKE_SOURCE_DIR}/SFML-2.6.1/lib/cmake/SFML")

find_package(SFML 2 COMPONENTS graphics REQUIRED)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(LibraryLab "${CMAKE_SOURCE_DIR}/src/main.cpp")
target_link_libraries(LibraryLab sfml-graphics)
message(STATUS "!!!!!!!!!! Добавьте .../SFML-2.6.1/bin в PATH, я пока не разобрался как ещё можно это починить")