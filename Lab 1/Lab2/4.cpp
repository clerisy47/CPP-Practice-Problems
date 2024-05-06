// WAP to calculate interest amount when principle, time and rate are given. Use concept of inline function and default argument.

#include <iostream>
using namespace std;


inline void interest(int p, int t, float r = 0.1) {
    cout << "Interest = " << p*t*r << endl;
}

int main() {
    interest(1000,2);
    interest(1000,2,0.2);
    return 0;
}
