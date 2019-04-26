#include "../headers/Vector.h"

Vector::Vector(int val) : value(val)
{
}

int Vector::get_value()
{
    return value;
}

void Vector::set_value(int val)
{
    value = val;
}