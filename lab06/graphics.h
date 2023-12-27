//
// Created by Alex on 04.12.2023.
//

#ifndef COM_122_GRAPHICS_H // this is a guard to protect libraries from duplicated import
#define COM_122_GRAPHICS_H

# include "raylib.h"
# include <cmath>

void draw_star(
        // this function draws a star from rays by given coordinates
        unsigned int rays,
        float x, float y,
        float inner_radius, float outer_radius,
        Color color = WHITE, float angle = 0.0f, float line_thickness = 2
    ) {
    //float angle = 0.0f;
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
}

#endif //COM_122_GRAPHICS_H
