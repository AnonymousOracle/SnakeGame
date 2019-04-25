class Timer
{
    public:
    void start();
    void stop();
    void set_timeout(double);
    bool is_timeout();

    private:
    double start_time,
    current_time;
    double timeout;
};