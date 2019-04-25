#ifndef QUEUE
#define QUEUE


class Queue
{
    public:
    
    Queue();
    void push(int);
    int pull();
    bool is_pull_valid();
    bool is_push_valid();
    
    private:

    int head,
    tail;
    
    int queue[10];
};


#endif