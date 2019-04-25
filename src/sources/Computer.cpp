#include "../headers/Computer.hpp"
#include "../enums/Direction.hpp"
#include "../structs/RenderData.hpp"

#include <iostream>


int Computer::get_key_code(char key)
{
    switch (key)
    {
        case 'w':
        {
            return UP;
            break;
        }
        case 'd':
        {
            return RIGHT;
            break;
        }
        case 's':
        {
            return DOWN;
            break;
        }
        case 'a':
        {
            return LEFT;
            break;
        }
    }
}

char Computer::read_key()
{
    char key;
    std::cin >> key;
    return key;
}

void Computer::render_screen(RenderData r_data)
{
     int max_x = r_data.width,
     max_y = r_data.height;
     
     for (int y = 0; y < max_y; y++)
     {
         for (int x = 0; x < max_x; x++)
         {
             std::cout << r_data.field[y][x];
         }
         std::cout << std::endl;
     }
}

void Computer::update_queue(Queue* q, int key_code)
{
    q->push(key_code);
}