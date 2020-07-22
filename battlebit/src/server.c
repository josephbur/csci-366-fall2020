//
// Created by carson on 5/20/20.
//

#include "stdio.h"
#include "stdlib.h"
#include "server.h"
#include "char_buff.h"
#include "game.h"
#include "repl.h"
#include "pthread.h"
#include<string.h>    //strlen
#include<sys/socket.h>
#include<arpa/inet.h>    //inet_addr
#include<unistd.h>    //write

game_server *SERVER;

int handle_client_connect(int player) {
    // handle connect from a telnet client
}

void server_broadcast(char_buff *out_buffer) {
    // send message to all players
}

int run_server() {
    // initialize server and wait for incoming connections
    // create a thread running handle_client_connect so they can interact with the server asynchronously
}

int server_start() {
    // start a serve thread, running run_server
}

struct game_server *server_create() {
    struct game_server *server = malloc(sizeof(struct game_server));
    server->server_thread = 0;
    server->player_threads[0] = 0;
    server->player_threads[1] = 0;
    server->player_sockets[0] = 0;
    server->player_sockets[1] = 0;
    return server;
}
