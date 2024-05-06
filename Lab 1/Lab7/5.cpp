// WAP to define a class Distance with necessay data members and functions. Then overload relational operators to compare two objects of distance class.

#include <iostream>
#include <cmath>
using namespace std;

class Distance {
    float kilometre,metre;
    public:
        Distance(float km = 0, float m=0): kilometre(km), metre(m) {}
        float Total() {
            float m = kilometre*1000 + metre;
            return m;
        }
        void input() {
            cout << "Enter the distance in kilometre and metre" << endl;
            cin >> kilometre >> metre;
        }

        void display() {
            cout << "(" << kilometre << "," << metre << ")";
        }

        int operator==(Distance d2) {
            if(Total()==d2.Total())
                return 1;
            return 0;
        }
        int operator<(Distance d2) {
            if(Total()<d2.Total())
                return 1;
            return 0;
        }
        int operator>(Distance d2) {
            if(Total()>d2.Total())
                return 1;
            return 0;
        }
};

int main() {
    Distance d1,d2;
    d1.input();
    d2.input();
    if(d1==d2) {
        cout << "They are equal" << endl;
    } else if (d1>d2) {
        d1.display();
        cout << " is greater than";
        d2.display();
        cout << endl;
    } else if(d1<d2) {
        d1.display();
        cout << " is less than";
        d2.display();
        cout << endl;
    }
    return 0;
}
