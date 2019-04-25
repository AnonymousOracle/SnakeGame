#include "../structs/RenderData.hpp"
#include "../structs/Coordinate.hpp"

#pragma once

class Game
{
    public:
    enum CellState
    {
        EMPTY,
        SNAKE,
        APPLE
    };
    RenderData get_render_data();
    bool is_game_over();
    void set_cell_state(Coordinate, int);

    private:
    static const int WIDTH = 20;
    static const int HEIGHT = 20;
    int field_state[WIDTH][HEIGHT];
};