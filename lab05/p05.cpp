//
// Created by Alex on 28.11.2023.
//

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
    //this program draws a number of red circles which intensity decreases gradually
    // at a new window with a black background

    // fix random seed
    srand(42);

    const int screenWidth = 800, screenHeight = 450; // window size and height
    const unsigned int circles_num = 15;            // initial number of circles
    const float circle_min_radius = 10.0f;
    //const float step = ((circle_max_radius - circle_min_radius) / (float) circles_num);
    unsigned int intensity = 80;
    float circle_radius = circle_min_radius;        // set initial size of circle
    const int intensity_step = intensity / circles_num; //

    InitWindow(screenWidth, screenHeight, "Circles");

    SetTargetFPS(1);               // Set our game to run at 1 frames-per-second

    // Main loop-----------------------------------
    BeginDrawing();
    ClearBackground(BLACK); // window background color


    for (int i=0; i<circles_num; i++) {
        float x = screenWidth / 2;
        float y = screenHeight / 2;
        intensity -= intensity_step;

        // set initial position for every circle----------------
        Vector2 ballPosition = {
                x, y
        };

        //colors ------------------------------------------------
        unsigned char red = 255, green = 0, blue = 0, intens = intensity; // intensity or transparency

        circle_radius += circle_min_radius * 2 ;

        //cout << "radius: " << circle_radius << " Intensity: "<< intensity<< endl;

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

