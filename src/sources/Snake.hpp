#include "../headers/Snake.h"
#include "../enums/Direction.hpp"

Snake::Snake()
{
    length = 2;
    direction = RIGHT;
}

void Snake::move(Vector vector_x, Vector vector_y)
{
    head_x += vector_x.get_value();
    head_y += vector_y.get_value();
}