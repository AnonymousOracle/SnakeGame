#include "../headers/Snake.h"
#include "Computer.hpp"

Snake::Snake(Coordinate head_coordinates)
{
    snake_x = new int[length];
    snake_y = new int[length];

    current_direction = RIGHT;
    length = 2;

    snake_x[0] = head_coordinates.x;
    snake_y[0] = head_coordinates.y;
}

void Snake::move()
{
    for (int l = length; l > 0; l--)
    {
        snake_x[l] = snake_x[l - 1];
        snake_y[l] = snake_y[l - 1];
    }
    
    switch(current_direction)
    {
        case RIGHT:
        {
            snake_x[0]++;
            break;
        }
        case LEFT:
        {
            snake_x[0]--;
            break;
        }
        case UP:
        {
            snake_y[0]--;
            break;
        }
        case DOWN:
        {
            snake_y[0]++;
            break;
        }
    }
}

void Snake::turn(int dir)
{
    switch(dir)
    {
        case RIGHT:
        {
            if (current_direction != LEFT)
            {
                current_direction = RIGHT;
            }
            break;
        }
        case LEFT:
        {
            if (current_direction != RIGHT)
            {
                current_direction = LEFT;
            }
            break;
        }
        case UP:
        {
            if (current_direction != DOWN)
            {
                current_direction = UP;
            }
            break;
        }
        case DOWN:
        {
            if (current_direction != UP)
            {
                current_direction = DOWN;
            }
            break;
        }
    }
}