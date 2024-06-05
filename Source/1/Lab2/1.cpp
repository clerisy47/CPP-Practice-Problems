// WAP to find the area of the triangle when three sides are given
// and the area of the triangle(when base and height are given) using function overloading and default argument.


#include <iostream>
#include <cmath>
using namespace std;

void area(float a, float b, float c) {
    if((a+b)>c && (b+c)>a && (c+a)>b) {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s-a) * (s-b) * (s-c));
        cout << "Area is: " << area << endl;
    } else {
        cout << "The area can't be computed" << endl;
    }
}

void area(float base, float height = 1) {
    float area;
    area = 0.5 * base * height;
    cout << "Area is: " << area << endl;
}

int main() {
    float a,b,c;
    cout << "Enter the sides a,b,c" << endl;
    cin >> a >> b >> c;
    area(a,b,c);
    cout << "Enter the base and height" << endl;
    float base,height;
    cin >> base >> height;
    area(base,height);
    area(base);
    return 0;
}
