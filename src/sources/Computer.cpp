#include "../headers/Computer.hpp"
#include "../enums/Direction.hpp"

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

void Computer::update_queue(Queue* q, int key_code)
{
    q->push(key_code);
}