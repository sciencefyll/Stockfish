project (Stockfish_src)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Files to be compiled.
file(GLOB Stockfish_srcfiles "*.cpp" "**/*.cpp")
add_executable(Stockfish_src ${Stockfish_srcfiles})

# Make this folder linkable for parent folder.
add_library(stockfish ${Stockfish_srcfiles})
target_link_libraries(Stockfish_src -lpthread)
