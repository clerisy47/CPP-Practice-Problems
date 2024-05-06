// WAP to find the volume of the cube, cuboid and cylinder using function overloading and default arguments.


#include <iostream>
#define PI 3.14
using namespace std;

void volume(int l) {
    cout << "Volume of cube is " << l*l*l << endl;
}

void volume(int l, int b, int h) {
    cout << "Volume of cuboid is " << l*b*h << endl;
}

void volume(float r, int h) {
    cout << "Volume of cylinder is " << PI*r*r*h << endl;
}

int main()
{
    volume(5);
    volume(5,2,6);
    volume(3,5);
    return 0;
}
