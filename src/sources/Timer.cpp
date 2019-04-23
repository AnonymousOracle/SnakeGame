#include "../headers/Timer.hpp"

#include <ctime>


void Timer::set_timeout(double value)
{
    timeout = value;
}

void Timer::start()
{
    start_time = time(NULL);
}

bool Timer::is_timeout()
{
    current_time = time(NULL);
    if (current_time - start_time == timeout)
        return true;
    else
        return false;
}