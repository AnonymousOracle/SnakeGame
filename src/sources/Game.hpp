#include "../headers/Game.h"
#include "../headers/utilities.hpp"

RenderData Game::get_render_data()
{
    RenderData rendered_data;

    rendered_data.width = WIDTH;
    rendered_data.height = HEIGHT;
    
    matrix_copy(field_state, rendered_data.field, 20);

    return rendered_data;
}

bool Game::is_game_over()
{
    return true;
}

void Game::set_cell_state(Coordinate coord, int state)
{
    field_state[coord.y][coord.x] = state;
}