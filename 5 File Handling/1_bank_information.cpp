#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class Account
{
private:
    int id, balance;
    char first_name[20], last_name[20];

public:
    void input()
    {
        cin >> id >> first_name >> last_name >> balance;
    }

    void display()
    {
        cout << setw(5) << left << id
             << setw(15) << first_name
             << setw(15) << last_name
             << setw(10) << right << balance << endl;
    }

    void store(fstream &file)
    {
        file.write(reinterpret_cast<char *>(this), sizeof(*this));
    }

    void retrieve(fstream &file)
    {
        file.read(reinterpret_cast<char *>(this), sizeof(*this));
    }
};

int main()
{
    Account acc[3];
    fstream file1("accounts.dat", ios::app | ios::binary);
    if (!file1)
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << "Enter information of Person " << i + 1 << endl;
        acc[i].input();
        acc[i].store(file1);
    }
    file1.close();

    fstream file2("accounts.dat", ios::in | ios::binary);
    if (!file2)
    {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << setw(5) << left << "id"
         << setw(15) << "First Name"
         << setw(15) << "Last Name"
         << setw(10) << right << "balance" << endl;
    for (int i = 0; i <= 2; i++)
    {
        acc[i].retrieve(file2);
        acc[i].display();
    }
    file2.close();

    return 0;
}