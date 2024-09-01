#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *str;

public:
    // dynamic constructor
    MyString()
    {
        str = new char[1];
        str[0] = '\0';
    }

    ~MyString()
    {
        delete[] str;
    }

    void input()
    {
        cin >> str;
    }

    void display()
    {
        cout << str << endl;
    }

    friend MyString operator+(MyString &s1, MyString &s2)
    {
        MyString result;
        result.str = new char[strlen(s1.str), strlen(s2.str)];
        strcpy(result.str, strcat(s1.str, s2.str));
        return result;
    }
};

int main()
{
    MyString a, b;
    a.input();
    b.input();
    MyString c = a + b;
    c.display();
    return 0;
}