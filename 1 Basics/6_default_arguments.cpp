#include <iostream>
using namespace std;

int increment(int salary, int increment = 12)
{
    return salary + salary * increment / 100;
}

int main()
{
    cout << "After increment salary of" << endl;
    cout << "CEO " << increment(35000, 9) << endl;
    cout << "Information Officer " << increment(25000, 10) << endl;
    cout << "Chief system analyst " << increment(24000) << endl;
    cout << "Chief programmer " << increment(18000) << endl;
    return 0;
}