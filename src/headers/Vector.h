#pragma once

class Vector
{
    public:
    Vector(int);
    int get_value();
    void set_value(int);

    enum Value
    {
        BACKWARD = -1,
        STOP,
        FORWARD
    };

    private:
    int value;
};