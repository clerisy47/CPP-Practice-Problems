// WAP that shows the concept of namespace.

#include <iostream>
using namespace std;

namespace declare {
    char name[25];
    int roll;
}

namespace result {
    int marks;
}

void output() {
    using declare::name;
    cout << "Name: " << name << endl
         << "Roll no: " << declare::roll << endl
         << "Marks: " << result::marks << endl;
}

int main() {
    using namespace declare;
    cout << "Enter the name:";
    cin >> name;
    cout << "Enter the roll no.";
    cin >> roll;
    cout << "Enter the marks:";
    cin >> result::marks;
    output();
}
