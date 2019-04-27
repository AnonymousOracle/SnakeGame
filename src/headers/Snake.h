#include "../structs/Coordinate.hpp"

#pragma once

class Snake
{
    public:
    Snake(Coordinate);
    void move();
    void turn(int);

    int* snake_x;
    int* snake_y;

    private:
    int length;
    int current_direction;
};