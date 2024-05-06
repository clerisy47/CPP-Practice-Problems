// Write a program to read and display Cartesian Coordinate using stream operators.

#include <iostream>
using namespace std;

class Cartesian {
    int x,y;
    public:
        friend istream & operator >>(istream &,Cartesian&);
        friend ostream & operator << (ostream &, Cartesian &);
};

istream & operator>>(istream &is,Cartesian &c) {
    is >> c.x >> c.y;
    return is;
}
ostream & operator <<(ostream &os,Cartesian &c) {
    os<< "(" << c.x << "," << c.y << ")";
    return os;
}

int main() {
    Cartesian c;
    cout << "Enter the cartesian co-ordinate";
    cin >> c;
    cout << "The entered cartesian co-ordinate is: ";
    cout << c;
    return 0;
}

