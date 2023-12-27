//
// Created by Alex on 13.12.2023.
//

#ifndef COM_122_LEVELS_H
#define COM_122_LEVELS_H

#include "globals.h"
#include "graphics.h"

void load_next_level(){
    level_index++; // load the next level (increment the number)
    if (level_index >= LEVEL_COUNT) {

        level_index = 0; // play levels until last level
        // TODO: show the victroy screen
        game_state = VICTORY_STATE;

        //draw_image(exit_image, shift_to_center_cell_by_x, shift_to_center_cell_by_y,shift_to_center_cell_by_x, shift_to_center_cell_by_y);

    }

    level = LEVELS[level_index]; // the variable level represents curr ent level

    for (size_t row = 0; row < level.rows; ++row) {
        for (size_t column = 0; column < level.columns; ++column) {
            char cell = level.data[row * level.columns + column];

            if (cell == ENTRANCE){
                player_row = row; // static_cast<size_t> (next_player_row)
                player_column = column; //static_cast<size_t> (next_player_column)
            }
        }
    }


    // calculate the size of the game elements
    derive_graphics_metrics_from_loaded_level(); // center everything to the center of the screen
}

#endif //COM_122_LEVELS_H
