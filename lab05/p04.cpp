//
// Created by ALex on 20.11.2023.
//


# include <iostream>
# include "raylib.h"
# include <cstdlib> // library for pseudorandom numbers

using namespace std;

float random (int low_bound, int high_bound) {
    // this function generates random numbers within the given range

    //return static_cast <unsigned char> (low_bound - rand() / (static_cast<float> (high_bound - low_bound)));
    return rand() % (high_bound - low_bound + 1);
}

int main() {
    //this program draws a number of colored circles
    // at a new window with a black background

    // fix random seed
    srand(42);

    const int screenWidth = 800, screenHeight = 450;
    const unsigned int circles_num = 100;
    const float circle_min_radius = 2, circle_max_radius = 20;

    InitWindow(screenWidth, screenHeight, "Circles");

    SetTargetFPS(1);               // Set our game to run at 1 frames-per-second

    // Main loop-----------------------------------
    BeginDrawing();
    ClearBackground(BLACK); // window background color

    for (int i=0; i<circles_num;i++) {
        float x = random(0.0f,screenWidth);
        float y = random(0.0f,screenHeight);
        Vector2 ballPosition = {
                x, y
        };
        //colors ------------------------------------------------
        unsigned char red = (rand() % 255) + 1, green = (rand() % 255) + 1, blue = (rand() % 255) + 1, intens = random(20,230); // intensity or transparency
        auto r = static_cast <unsigned char> (rand() / static_cast<float>(RAND_MAX * 256));      // 2-th way of setting the color
        float circle_radius = random(circle_min_radius, circle_max_radius) ;

        DrawCircleV(ballPosition, circle_radius, {red, green, blue, intens }); //ballPosition  . It is possible to set circle size like this: rand() % 20
    }
    EndDrawing();

    while (!WindowShouldClose())    // event loop to process events . Detect window close button or ESC key
    {
        PollInputEvents();  // event loop
    }
    CloseWindow();        // Close window and OpenGL context


    return 0;
}
