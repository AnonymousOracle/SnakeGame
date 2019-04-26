//Pre-compiled headers & objects

#include "sources/Timer.hpp"
#include "sources/Game.hpp"
#include "sources/Queue.hpp"
#include "sources/Snake.hpp"

#include <iostream>
#include <cstdlib>
#include <ncurses.h>


Computer main_computer;
Timer main_timer;
Game game;
RenderData screen_data;

Coordinate snake_start_coordinates = {4, 4};
Snake snake(snake_start_coordinates);