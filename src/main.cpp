#include "pcho.hpp"


void Computer::loop()
{
    Computer computer;
    Queue queue;
    
    char direction = computer.read_key();
    
    int key_code = computer.get_key_code(direction);
    computer.update_queue(&queue, key_code);
    std::cout << queue.pull();
}

int main()
{
    Computer c;
    c.loop();
    return 0;
}

void Computer::setup()
{
    Timer main_timer;
    
    main_timer.set_timeout(0.5);
    main_timer.start();
}