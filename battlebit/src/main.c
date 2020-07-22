#include <stdio.h>
#include <stdlib.h>
#include "repl.h"
#include "game.h"

int main() {
    printf("Welcome to BattleBit\n\n");
    struct char_buff * command;
    game_init();
    do {
        command = repl_read_command("battleBit (? for help) > ");
        repl_execute_command(command);
        cb_free(command);
    } while (command);
    return 0;
}
