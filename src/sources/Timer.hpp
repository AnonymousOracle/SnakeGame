#include "../headers/Timer.h"

#include <ctime>


void Timer::set_timeout(double sec)
{
    timeout = sec;
}

void Timer::start()
{
    start_time = time(NULL);
}

bool Timer::is_timeout()
{
    current_time = time(NULL);
    if (current_time - start_time == timeout)
    {
        start_time += timeout;
        return true;
    }
    else
        return false;
}