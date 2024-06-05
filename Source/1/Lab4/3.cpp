// WAP that can store DepartmentID and DepartmentName with constructor.
// Also write destructor in the same class and show that the objects are destroyed in the reverse order of creation with suitable message.

#include <iostream>
using namespace std;

class Department {
    int DepartmentID;
    char DepartmentName[25];

    public:
        Department() {
            cout << "Enter the department id: ";
            cin >> DepartmentID;
            cout << "\nEnter the department name: ";
            cin >> DepartmentName;
        }
        ~Department(){cout << "Destroyed department with id:" << DepartmentID << endl;}
};

int main() {
    Department d1,d2,d3;
    return 0;
}
