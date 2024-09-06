#include <iostream>
#include <cmath>
using namespace std;

int area(int l, int b) // can't provide default argument to this function as it will be ambiguious to third function
{
    return l * b;
}

int area(int r)
{
    return M_PI * r * r;
}

double area(double r = 1.0)
{
    return M_PI * r * r;
}

int main()
{
    int l = 5, b = 6, r = 5.4;
    cout << area(l, b) << " " << area(r) << " " << area() << " " << area(r) << endl;
    return 0;
}