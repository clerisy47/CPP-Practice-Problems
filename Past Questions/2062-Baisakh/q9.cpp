// Write a program to make your own manipulator.

#include <iostream>
using namespace std;

ostream & rupee(ostream &out) {
    out << "Rs.";
    return out;
}

int main() {
    int balance;
    cout << "Enter your bank balance: ";
    cin >> balance;
    cout << rupee  << balance;
    return 0;
}
