#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *s;
    int size;

public:
    // dynamic constructor
    MyString(char *str = "")
    {
        size = strlen(str);
        s = new char[size + 1];
        strcpy(s, str);
    }
    ~MyString()
    {
        delete[] s;
    }
    char *getS()
    {
        return s;
    }
    int getSize()
    {
        return size;
    }
    friend MyString operator+(MyString &ms1, MyString &ms2)
    {
        char *temp = new char[ms1.size + ms2.size + 1];
        strcpy(temp, strcat(ms1.s, ms2.s));
        MyString result(temp);
        return result;
    }
};

int main()
{
    MyString a("Object"), b(" Oriented");
    MyString c = a + b;
    cout << c.getS() << endl;
    return 0;
}