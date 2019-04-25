#include "../headers/Game.hpp"
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