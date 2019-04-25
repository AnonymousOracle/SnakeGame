#include "pcho.hpp"


void Computer::loop()
{
    Computer computer;
    Queue queue;
    
    while (!main_timer.is_timeout())
    {
        char direction = computer.read_key();
        int key_code = computer.get_key_code(direction);
        computer.update_queue(&queue, key_code);
        std::cout << queue.pull();
    }
    std::cout << "Timeout reached\n";
}

int main()
{
    Game g;
    main_computer.setup();
    while (g.is_game_over())
        main_computer.loop();

    return 0;
}

void Computer::setup()
{
    main_timer.set_timeout(1);
    main_timer.start();
}