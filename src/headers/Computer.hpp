#include "../sources/Queue.cpp"
#include "../headers/Game.hpp"

#ifndef COMPUTER
#define COMPUTER


class Computer
{
    public:
    void loop();
    void setup();
    void render_screen(RenderData);
    void update_queue(Queue*, int);
    char read_key();
    int get_key_code(char);
};


#endif