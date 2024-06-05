// WAP that will add objects of a date class with members day, month and year using operator overloading.
// Make another function to find no. of days in between two dates by operator overloading.


#include <iostream>
using namespace std;

class Date {
    int day,m,y;
    public:
        Date(int p=0, int q=0, int r=0) {
            day = p;
            m = q;
            y = r;
        }
        void display() {
            cout << "(" << day << "/" << m << "/" << y << ")";
        }
        Date operator+(Date d) {
            Date temp;
            temp.day  = day + d.day;
            temp.m = m + d.m + temp.day/30;
            temp.day %= 30;
            temp.y = y+ d.y + temp.m/12;
            temp.m %= 12;
            return temp;
        }
        int operator-(Date d) {
            int days;
            int days1 = day+m*30+y*365;
            int days2 = day+m*30+y*365;
            days = days2 - days1;
            if(days < 0)
                return -days;
            return days;
        }

};

int main() {
    Date d1(10,7,2016), d2(10,7,1995), d3;
    d1.display();
    cout << "+";
    d2.display();
    cout << "=";
    d3 = d1 + d2;
    d3.display();
    cout << "\n Days between them: " << d1-d2;
    return 0;
}
