/* Program to display time*/

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

    // standard way
    // Time(int hour = 0, int minute = 0, int second = 0)
    //     : hour(hour), minute(minute), second(second)
    // {
    // }

    // function declaration and definition both inside
    // void display()
    // {
    //     cout << hour << " " << minute << " " << second << endl;
    // }
    // funciton declaration inside and definition outside
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