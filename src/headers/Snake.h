#include "Vector.hpp"

#pragma once

class Snake
{
    int head_x,
    head_y;
    int length;
    int direction;

    public:
    Snake();
    void move(Vector, Vector);
};