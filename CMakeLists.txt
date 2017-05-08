# settings
cmake_minimum_required(VERSION 3.6)
project(Stockfish LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(include)

# Our source code
add_subdirectory(src)
