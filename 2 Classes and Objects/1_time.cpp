#include <iostream>
using namespace std;

class Time
{
private:
    int second, minute, hour;

public:
    // Constructor
    Time(int hour = 0, int minute = 0, int second = 0)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    void display();
};

// can add function definition outside the class as well
void Time::display()
{
    cout << hour << " " << minute << " " << second << endl;
}

int main()
{
    Time t1(1, 20, 47), t2;
    t1.display();
    t2.display();
    return 0;
}