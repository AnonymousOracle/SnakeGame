#include "sources/Queue.cpp"

#include <iostream>

enum VectorValue
{
    BACKWARD = -1,
    STOP,
    FORWARD
};

enum Destination
{
    UP = 1,
    RIGHT,
    DOWN,
    LEFT
};

char read_key()
{
    char key;
    std::cin >> key;
    return key;
}

int get_key_code(char key)
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

Queue q;

void update_queue(Queue* q, int key_code)
{
    q->push(key_code);
}

int main()
{
    return 0;
}