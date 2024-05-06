// 2. WAP to calculate the net salary of an employee under the following condition:
// a) If salary > 25000, Bonus is 15%
// b) If salary > 20,000, Bous is 10%
// c) Else bonus is 5%


#include <iostream>
using namespace std;

int main() {
    float salary;
    cout << "Enter the salary: ";
    cin >> salary;
    float bonus = 0.0;
    if(salary > 25000)
        bonus  = 0.15 * salary;
    else if(salary>20000 && salary<=25000)
        bonus = 0.10*salary;
    else
        bonus = 0.05*salary;
    cout << "The salary with bonus is: " << (bonus+salary) << endl;
    return 0;
    }
