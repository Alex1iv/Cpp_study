//
// Created by Alex on 15.12.2023.
//

#ifndef COM_122_SOUND_H
#define COM_122_SOUND_H
#include "raylib.h"
#include "globals.h"

void load_sound() {
    InitAudioDevice();  // Initialize audio device
    coin_sound = LoadSound("data/sounds/coin.wav");
    exit_sound = LoadSound("data/sounds/exit.wav");
}

// De-Initialization
void unload_sound() {
    UnloadSound(coin_sound);
    UnloadSound(exit_sound);
    CloseAudioDevice();     // Close audio device
}
#endif //COM_122_SOUND_H
