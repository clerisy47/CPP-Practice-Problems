// WAP that shows the conversion from basic type to class type.

#include <iostream>
using namespace std;

class Time {
    int h,m,s;
    public:
        Time():h(0),m(0),s(0) {}
        Time(int s) {
            m = s/60;
            s %= 60;
            h = m/60;
            m %= 60;
        }
        void display() {
            cout << h << ":" << m << ":" << s << endl;
        }
};

int main() {
    Time t;
    int duration = 90;
    cout << duration << " seconds is:" << endl;
    t = duration;
    t.display();
    return 0;
}
