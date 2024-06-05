// WAP that shows the concept of pass by reference.
#include <iostream>
using namespace std;

inline void swap(int &a, int &b) {
    int temp = b;
    b = a;
    a = temp;
}

int main() {
    int n1 = 1, n2 = 2;
    cout << "Before swapping, the values are:" << endl;
    cout << n1 << "\t" << n2 << endl;
    swap(n1,n2);
    cout << "After swapping, the values are:" << endl;
    cout << n1 << "\t" << n2 << endl;
    return 0;
}
