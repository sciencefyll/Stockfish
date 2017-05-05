project (Stockfish_src)

# Files to be compiled.
file(GLOB Stockfish_srcfiles "*.cpp" "**/*.cpp")
add_executable(Stockfish_src ${Stockfish_srcfiles})

# Make this folder linkable for parent folder.
target_link_libraries(Stockfish_src -lpthread)