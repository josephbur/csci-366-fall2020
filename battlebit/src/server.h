//
// Created by carson on 5/20/20.
//

#ifndef BATTLESHIP_SERVER_H
#define BATTLESHIP_SERVER_H

#include "char_buff.h"

typedef  struct game_server {
    pthread_t server_thread;
    pthread_t player_threads[2];
    int player_sockets[2];
} game_server;

int server_start();

void server_broadcast(char_buff *out_buffer);

game_server * server_create();

#endif //BATTLESHIP_SERVER_H
