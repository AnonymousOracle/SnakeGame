#include "Queue.h"
#include "Game.h"

#pragma once

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