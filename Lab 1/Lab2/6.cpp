// WAP with function that takes two arguments as reference and return the smaller one by reference. In main program, take two numbers as input from users and find the average of the two numbers.
// Call the function by assigning the average value to the function and display the value of both arguments.

#include <iostream>
using namespace std;

float &small(float &a, float &b) {
    return a < b ? a : b;
}
int main() {
    float n1 = 2.0, n2 = 4.0;
    float average = (n1+n2)/2;
    cout << "The values before are: " << n1 << " " << n2 << endl;
    small(n1,n2) = average;
    cout << "The values after are: " << n1 << " " << n2 << endl;
    return 0;
}
