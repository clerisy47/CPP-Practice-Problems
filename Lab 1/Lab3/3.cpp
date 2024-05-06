// WAP to show the use of Enumeration data type.

#include <iostream>
using namespace std;

enum days {sun=1,mon, tue, wed, thu, fri, sat};

int main() {
    int n;
    cout << "Enter the day of week: ";
    cin >> n;
    switch(n) {
          case sun: cout << "Sunday";
                  break;
          case mon: cout << "Monday";
                    break;
          case tue: cout << "Tuesday";
                    break;
          case wed: cout << "Wednesday";
                    break;
          case thu: cout << "Thursday";
                    break;
          case fri: cout << "Friday";
                    break;
          case sat: cout << "Saturday";
                    break;
          default: cout << "Invalid choice";
    }
    return 0;
}
