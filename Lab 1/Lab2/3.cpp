// Write meaningful program to show use of default arguments.


#include <iostream>
using namespace std;

int area(int l) {
    return l*l;
}

int area(int b, int h) {
    return b*h;
}

float area(float r)
{
    return 3.14*r*r;
}

int main() {
    cout << area(9) << endl;
    cout << area(5) << endl;
    cout << area(5,6) << endl;
    return 0;
}
