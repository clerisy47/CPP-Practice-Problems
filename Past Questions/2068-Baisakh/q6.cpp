/* Write a program to display the output in pyramid form as follows.
A
AB
ABC
ABCD
*/

#include <iostream>
using namespace std;

int main() {
    char *c = "ABCD";
    for (int i=1;i<=4;i++) {
        cout.write(c,i);
        cout << endl;
    }
    return 0;
}
