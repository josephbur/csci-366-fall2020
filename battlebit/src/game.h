//
// Created by carson on 5/20/20.
//

#include <stdbool.h>

#ifndef BATTLESHIP_GAME_H
#define BATTLESHIP_GAME_H

#define BOARD_DIMENSION 8
#define SHIP_TYPES 5

enum game_status {CREATED, INITIALIZED, PLAYER_1_TURN, PLAYER_2_TURN, PLAYER_1_WINS, PLAYER_2_WINS};

typedef struct player_info {
    unsigned long long hits;
    unsigned long long shots;
    unsigned long long ships;
} player_info;

typedef struct game {
    enum game_status status;
    player_info players[2];
} game;

struct game * game_get_current();

void game_init();

void game_init_player_info(player_info *player_info);

int game_fire(game *game, int player, int x, int y);

int game_load_board(game *game, int player, char * spec);

unsigned long long int xy_to_bitval(int x, int y);

#endif //BATTLESHIP_GAME_H
