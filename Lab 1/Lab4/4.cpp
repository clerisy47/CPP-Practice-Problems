// Write a complete program that illustrates the object concept to add and subtract time units . /
// A time unit has hour, minute and second as member. The memeber functions to add and subtract time should have objects as an argument.

#include <iostream>
using namespace std;

class times {
    int hr,m,sec;
    public:
        void add(times &x, times &y) {
            int total1,total2,sum;
            total1 = x.hr *3600 + x.m *60 + x.sec;
            total2 = y.hr *3600 + y.m *60 + y.sec;
            sum = total1+total2;
            hr = sum/3600;
            m = (sum%3600) / 60;
            sec = (sum%3600) % 60;
        }

        void subtract(times &x, times &y) {
            int total1,total2,diff;
            total1 = x.hr *3600 + x.m *60 + x.sec;
            total2 = y.hr *3600 + y.m *60 + y.sec;
            if (total1>total2)
                diff = total1-total2;
            else
                diff = total2-total1;
            hr = diff/3600;
            m = (diff%3600) / 60;
            sec = (diff%3600) % 60;
        }

        void input() {
            cout << "Enter the time in hr:m:sec ";
            cin >> hr >> m >> sec;
        }

        void display() {
            cout << "The time is " << hr << ":" << m << ":" << sec;
        }


        ~times() {}
};

int main() {
    times t1,t2,t3;
    t1.input();
    t2.input();
    cout << "On adding:\n";
    t3.add(t1,t2);
    t3.display();
    cout << "\nOn subtracting" << endl;
    t3.subtract(t1,t2);
    t3.display();
    return 0;
}

