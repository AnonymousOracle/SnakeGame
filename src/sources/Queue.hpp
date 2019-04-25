#include "../headers/Queue.h"


Queue::Queue() :
    head(0), tail(-1)
{
}

void Queue::push(int value)
{
    if (is_push_valid())
        queue[++tail] = value;
}

bool Queue::is_push_valid()
{
    if (tail < 10)
        return true;
    else
        return false;
}

int Queue::pull()
{
    if (is_pull_valid())
        return queue[head++];
    return 404;
}

bool Queue::is_pull_valid()
{
    if (head <= tail)
        return true;
    else
        return false;
}