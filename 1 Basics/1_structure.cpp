#include <iostream>
using namespace std;

struct Date
{
public:
    int year;
    int month;
    int day;
};

void input(Date &date)
{
    cin >> date.year;
    cin >> date.month;
    cin >> date.day;
}

void print(Date &date)
{
    cout << date.year << "/" << date.month << "/" << date.day;
}

int main()
{
    Date date;
    input(date);
    print(date);
    return 0;
}