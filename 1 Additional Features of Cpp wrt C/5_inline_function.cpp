// inline function example

#include <iostream>
using namespace std;

inline int netPayment(int salary)
{
    return salary - salary * 0.1;
}

int main()
{
    int salary;
    cin >> salary;
    cout << "Salary after tax deduction " << netPayment(salary) << endl;
    return 0;
}