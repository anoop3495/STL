#include <iostream>

class WorkArea
{
public:
    virtual void workArea() =0;
};

class SleepArea
{
public:
    virtual void sleepArea() =0;
};


class Worker : public WorkArea, public SleepArea
{
public:
    void sleepArea()
    {
        std::cout << "Man Sleep Area" << std::endl;
    }
    void workArea()
    {
        std::cout << "Man Work Area" << std::endl;
    }
};

class Robot : public WorkArea
{
public:
    void workArea()
    {
        std::cout << "Robot Work Area" << std::endl;
    }
};

/*int main()
{
    Worker w;
    w.workArea();
    w.sleepArea();

    Robot r;
    r.workArea();
    std::cin.get();
}*/