#include <iostream>
#include <fstream>

using namespace std;

class Student
{
private:
    int roll, marks;
    char name[50], address[20];

public:
    void input()
    {
        cin.ignore();
        cin.getline(name, 50);
        cin >> roll >> marks >> address;
    }
    void display()
    {
        cout << setw(5) << left << roll
             << setw(30) << left << name
             << setw(15) << left << marks
             << setw(30) << right << address << endl;
    }
    void store(fstream &file)
    {
        file.write(reinterpret_cast<char *>(this), sizeof(*this));
    }
    void retrieve(fstream &file)
    {
        file.read(reinterpret_cast<char *>(this), sizeof(*this));
    }
    int getRoll()
    {
        return roll;
    }
};

void displayByRoll(fstream &file, int rollNumber)
{
    Student st;
    bool found = false;
    while (file.read(reinterpret_cast<char *>(&st), sizeof(st)))
    {
        if (st.getRoll() == rollNumber)
        {
            st.display();
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Student with roll number " << rollNumber << " not found." << endl;
    }

    file.close();
}

int main()
{
    Student st[3], st2[3];
    fstream file;
    file.open("students.dat", ios::app | ios::binary);
    if (!file)
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    for (int i = 0; i <= 2; i++)
    {
        st[i].input();
        st[i].store(file);
    }
    file.close();
    file.open("students.dat", ios::in | ios::binary);
    if (!file)
    {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    for (int i = 0; i <= 2; i++)
    {
        st2[i].retrieve(file);
        st2[i].display();
    }
    displayByRoll(file, 2);
    file.close();
}