cmake_minimum_required(VERSION 3.16)
project(battleship C)

add_executable(battleBit src/main.c src/server.c src/server.h src/repl.c src/repl.h src/game.c src/game.h src/char_buff.c src/char_buff.h)
target_link_libraries(battleBit PUBLIC pthread)

add_library(battleBit_lib src/main.c src/server.c src/server.h src/repl.c src/repl.h src/game.c src/game.h src/char_buff.c src/char_buff.h)

add_subdirectory(googletest)