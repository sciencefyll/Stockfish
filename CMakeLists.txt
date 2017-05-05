# settings
cmake_minimum_required(VERSION 3.6)
project(Stockfish LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)

# Our source code
add_subdirectory(src)