//
// Created by Alex on 13.12.2023.
//
#include "globals.h"
#include "levels.h"
#ifndef COM_122_PLAYER_H
#define COM_122_PLAYER_H
using namespace std;
#include <iostream>
#include "raylib.h"

void move_player(int dx, int dy){
    int next_player_row = static_cast <int> (player_row) + dy;//static_cast <int> (player_column) + dx;
    int next_player_column = static_cast <int> (player_column) + dx;

    // make sure we stay within the array-----------
    if (!(next_player_row >= 0 && next_player_row < level.rows &&
        next_player_column >=0 && next_player_column < level.columns)){
        return;
    }

    char cell = level.data[next_player_row * level.columns + next_player_column];

    // we cannot pass through the wall
    if (cell != WALL) {
        player_row = static_cast<size_t> (next_player_row);
        player_column = static_cast<size_t> (next_player_column);

        if (cell== COIN){
            level.data[next_player_row * level.columns + next_player_column] = FLOOR;
            player_score += POINTS_FOR_COIN;
            PlaySound(coin_sound);
        }
        else if (cell == DIAMOND) {
                level.data[next_player_row * level.columns + next_player_column] = FLOOR;
                player_score += POINTS_FOR_DIAMOND;
        }

        else if (cell == EXIT){
            PlaySound(exit_sound);
            load_next_level();
        }
    }
}

#endif //COM_122_PLAYER_H
