#include "pcho.hpp"

void Computer::setup()
{
    for (int y = 0; y < 20; y++)
    {
        for (int x = 0; x < 20; x++)
        {
            Coordinate coord = {x, y};
            game.set_cell_state(coord, Game::EMPTY);
        }
    }

    game.set_cell_state(snake_start_coordinates, Game::SNAKE);

    Coordinate current_snake_coordinates = {snake_start_coordinates.x - 1, snake_start_coordinates.y};
    game.set_cell_state(current_snake_coordinates, Game::SNAKE);

    screen_data = game.get_render_data();
}

void Computer::loop()
{
    char direction = main_computer.read_key();
    main_computer.get_key_code(direction);

    main_computer.render_screen(screen_data);
}

int main()
{
    main_computer.setup();
    main_computer.render_screen(screen_data);

    snake.turn(RIGHT);
    snake.move();
    main_computer.render_screen(screen_data);

    return 0;
}