#include "../sources/Queue.cpp"


class Computer
{
    public:
    void render_screen();
    void update_queue(Queue*, int);
    char read_key();
    int get_key_code(char);
};