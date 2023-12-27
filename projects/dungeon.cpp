//
// Created by Alex on 13.12.2023.
//

#include "raylib.h"
#include "globals.h"
#include "graphics.h"
#include "levels.h"
#include "images.h"
#include "player.h"
#include "sound.h"

void draw_game(){
    // redraw the game for every frame
    game_frame++; // spins the coin

    switch (game_state) {
        case MENU_STATE:
            draw_menu();
            break;
        case GAME_STATE:
            draw_level();
            draw_player();
            draw_player_score();
            break;
        case PAUSED_STATE:
            draw_pause_menu();
            break;
        case VICTORY_STATE:
            draw_victory_menu();
            break;
    }
}

// move character -------------------
void update_game(){
    switch (game_state) {
        case MENU_STATE:
            SetExitKey(0); // The game exits when one press ESC key by default . The value 0 means it is disabled
            if (IsKeyPressed((KEY_ENTER))) {
                game_state = GAME_STATE;
            }

            break;
        case GAME_STATE:
            if (IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W)){
                move_player(0,-1);
            } else if(IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_S)){
                move_player(0,1);
            } else if(IsKeyPressed(KEY_LEFT) || IsKeyPressed(KEY_A)){
                move_player(-1,0);
            } else if(IsKeyPressed(KEY_RIGHT) || IsKeyPressed(KEY_D)){
                move_player(1,0);
            }
            break;

        case PAUSED_STATE:
            //draw_pause_menu();
            if (IsKeyPressed(KEY_ESCAPE)) {
                game_state= GAME_STATE;
            }
            break;
        case VICTORY_STATE:
            if (IsKeyPressed(KEY_ENTER)) {
                game_state= GAME_STATE;
            }
            break;
    }

}

int main() {
    SetConfigFlags(FLAG_VSYNC_HINT | FLAG_MSAA_4X_HINT);

    InitWindow(1024,500,"Dungeon");
    //InitWindow(GetMonitorWidth(1), GetMonitorHeight(1),"Dungeon");

    // uncomment below instead of the lone above-------------------------------------------------.
    //InitWindow(GetMonitorWidth(0), GetMonitorHeight(1), "Dungeon");
    //HideCursor();
    //ToggleFullscreen();

    SetTargetFPS(60);

    load_fonts();
    load_images();
    load_sound();
    load_next_level();

    // base menu
    while (!IsKeyPressed(KEY_ENTER)) {
        BeginDrawing();
        draw_menu(); // menu
        EndDrawing();
    }

    while (!WindowShouldClose()) {
        BeginDrawing();
        // draw the game screen
        update_game();
        draw_game();
        EndDrawing();
    }


    CloseWindow();

    // unload libraries from the memory---------------
    unload_fonts();
    unload_images();
    unload_sound();

    return 0;
}