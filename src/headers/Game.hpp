#include "../structs/RenderData.hpp"

#ifndef GAME
#define GAME


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
    void set_cell_state();

    private:
    static const int WIDTH = 20;
    static const int HEIGHT = 20;
    int field_state[WIDTH][HEIGHT];
};


#endif