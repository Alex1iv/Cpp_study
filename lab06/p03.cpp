//
// Created by Alex on 04.12.2023.
//


# include "raylib.h"
# include <cmath>
# include "graphics.h"
using namespace std;
/*
void draw_star(
        unsigned int rays,
        float x, float y,
        float inner_radius, float outer_radius,
        Color color = WHITE, float rotation_angle = 0.0f, float line_thickness = 2
    ) {
    float angle = 0.0f;
    float angle_delta = static_cast<float>(2.0 * M_PI / rays);

    float prev_end_x = x + cos(angle - angle_delta) * inner_radius;
    float prev_end_y = y + sin(angle - angle_delta) * inner_radius;
    for (int i=0; i<rays; i++) {
        const float radius = i % 2 == 0 ? outer_radius : inner_radius;
        const float end_x = x + cos(angle) * radius;
        const float end_y = y + sin(angle) * radius;
        DrawLineEx({x, y}, {end_x, end_y}, line_thickness, color);
        DrawLineEx({end_x, end_y}, {prev_end_x, prev_end_y}, line_thickness, color);
        prev_end_x = end_x;
        prev_end_y = end_y;
        angle += angle_delta;
    }
}*/

int main() {
    //this program draws stars

    const int screenWidth = 800, screenHeight = 450, dist = 130;
    const int x_1 = screenWidth*0.5f - dist, x_2 = screenWidth*0.5f + dist, y_1 = screenHeight*0.5f - dist, y_2 = screenHeight*0.5f + dist;

    InitWindow(screenWidth, screenHeight, "Stars");

    SetTargetFPS(1);               // Set our game to run at 1 frames-per-second

    // Main loop-----------------------------------
    BeginDrawing();
    ClearBackground(BLACK); // window background color

    draw_star(8, screenWidth*0.5f,screenHeight *0.5f, 50.0f, 130.0f, { 255, 0, 0, 255 });
    draw_star(8, x_1,y_1, 20.0f, 80.0f, { 200, 200, 0, 255 });
    draw_star(8, x_1,y_2, 20.0f, 80.0f, { 200, 200, 0, 255 });
    draw_star(8, x_2,y_1, 20.0f, 80.0f, { 200, 200, 0, 255 });
    draw_star(8, x_2,y_2, 20.0f, 80.0f, { 200, 200, 0, 255 });

    EndDrawing();

    while (!WindowShouldClose())    // event loop to process events . Detect window close button or ESC key
    {
        PollInputEvents();  // event loop
    }
    CloseWindow();        // Close window and OpenGL context



    return 0;
}
