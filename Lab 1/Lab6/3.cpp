// Create a class mdistance to store the values in meter and centimeter and class edistance to store the values in feet and inches.
// Perform addition of object of mdistance and addition of object od edistance using friend function.

#include <iostream>
using namespace std;

class edistance;
class mdistance {
    int m,cm;
    public:
        mdistance(int x,int y): m(x), cm(y) { }
        mdistance() {
            cout << "Enter the distance in metre and centimetre";
            cin >> m >> cm;
        }
        friend void add(mdistance,edistance);
};

class edistance {
    int ft,inch;
    public:
        edistance(int x,int y): ft(x), inch(y) { }
        edistance() {
            cout << "Enter the distance in feet and inches";
            cin >> ft >> inch;
        }
        friend void add(mdistance,edistance);
};

void add (mdistance a,edistance b) {
        int total_cm = a.m*100 + a.cm+ b.ft*30+(b.inch*30)/12;
        int total_m = total_cm/100;
        total_cm = total_cm%100;
        cout << "Added distance is " << total_m << "m and " << total_cm << "cm.";

}

int main() {
    mdistance a(1,20);
    edistance b(1,12);
    add(a,b);
    return 0;
}
