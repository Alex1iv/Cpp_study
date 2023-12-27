# include "raylib.h"
# include <cmath>
# include <cstdlib> // library for pseudorandom numbers

using namespace std;

float random (int low_bound, int high_bound) {
    // this function generates random numbers within the given range
    return rand() % (high_bound - low_bound + 1);
}

void DrawCircle(int count){
    //float dx = 3.0f, dy = 3.0f;
    const int screen_width = 800, screen_height = 450;
    float radius[count];
    float x[count], y[count];
    float dx[count], dy[count];
    Color color[count];

    int max_speed=3;
    float min_radius=5.0f, max_radius=10.0f;

    for (int i = 0; i < count; i++){
        DrawCircleV({x[i],y[i]}, radius[i], color[i]);
        //radius[i] = random(min_radius, max_radius);
        //x[i] = random(radius[i], screen_width - radius[i]);

        if (x[i] + radius[i] > screen_width || x[i] - radius[i] > 0) dx[i] = -dx[i];
        x[i] += dx[i];
        //y[i] = random(radius[i], screen_height - radius[i]);

        if (y[i] + radius[i] > screen_height || y[i] - radius[i] > 0) dy[i] = -dy[i];
        y[i] += dy[i];
        /*dx[i] = random(-max_speed, max_speed);
        dy[i] = random(-max_speed, max_speed);

        if (abs(dx[i]) < 1E-2f) {dx[i] == 1.0f;}
        if (abs(dy[i]) < 1E-2f) {dy[i] == 1.0f;}*/

        color[i] = WHITE;


        //update_circle(x,y);
    }
    EndDrawing();

}

/*
void update_circle (int x, int y) {
    x += dx;
    if (x+ radius > screen_width || x - radius < 0) {
        dx = -dx;
    }
    y += dy;
    if (y + radius > screen_height || y - radius < 0) {
        y = -dy;
    }
}*/




int main() {
    //this program draws circles
    int count = 200;
    const int screen_width = 800, screen_height = 450;

    int max_speed=3;
    float min_radius=5.0f, max_radius=10.0f;
    // fix random seed
    srand(42);

    InitWindow(screen_width, screen_height, "Balls");

    SetTargetFPS(30);               // Set our game to run at 30 frames-per-second

    // Main loop-----------------------------------
    while (!WindowShouldClose()){
        BeginDrawing();

        DrawRectangle(0,0, screen_width, screen_height, {0, 0, 0, 15});

        // Balls------------------------------
        for (int i = 0; i < count; i++){
            DrawCircle(i);
        }
        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context

    return 0;
}

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