#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // must use non-member function
    friend istream &operator>>(istream &is, Person &p)
    {
        is >> p.name >> p.age;
        return is;
    }
    // must use non-member function
    friend ostream &operator<<(ostream &os, Person &p)
    {
        os << p.name << " " << p.age;
        return os;
    }
};

int main()
{
    Person P;
    cin >> P;
    cout << P << endl;
}