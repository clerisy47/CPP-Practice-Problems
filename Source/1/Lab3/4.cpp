// WAP with class to represent Time having member functions to read and display Time.
// Your program should be designed in such a way that the member function to read Time should be declared
// within the class definition and should be defined outside of the class definition.
// Member function to display Time should be declared within the class definition.


#include <iostream>
using namespace std;

class Time {
    int h,m,s;
    public:
        void read();
        void display() {
            cout << "Time is: " << h << ": " << m << " : " << s << endl;

        }
};

void Time::read() {
    cout << "Enter the Time in hh:mm::sec format.";
    cin >> h >> m >> s;
}

int main() {
    Time t;
    t.read();
    t.display();
    return 0;
}
