// Write a program to display n characters by using default argument for all parameters.
// Assume that the function takes two parameters one character to be printed and other
// number of characters to be printed.

#include <iostream>
#include <string.h>
using namespace std;

void display(char *p="default text",int n = 12) {
    int length = strlen(p);
    if(n>length || n<0) {
        cout << "Invalid length";
    }
    for (int i=0;i<n;i++)
        cout << p[i];
}

int main() {
    display("kathmandu",3);
    cout <<"\n";
    display("pulchowk",4);
    return 0;
}
