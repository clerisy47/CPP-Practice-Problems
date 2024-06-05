// Write a class having an array as member. Overload the index operator( [] ) to input and display the elements.

#include <iostream>
#include <cstdlib>
using namespace std;

const int size = 4;

class Array {
    int a[size];
    public:
        Array(int b[]) {
            for (int i=0;i<size;i++)
                a[i] = b[i];
        }
        int& operator[](int index) {
            if (index<0 || index >size)
            {
                cout << "Bound exception";
                exit(0);
            }
            return a[index];
        }

};


int main() {
    int b[] = {1,3,5,9};
    Array A(b);
    cout << "Second element is:" << A[1] << endl;
    A[1] = 1;
    cout << "Second element is:" << A[1] << endl;
    cout << "Fifth element is:" << A[5];
    return 0;
}
