#include <iostream>
#include <fstream>
#include <iomanip>

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
             << setw(30) << name
             << setw(15) << marks
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
    void setMarks(int x)
    {
        marks = x;
    }
};

void displayByRoll(int rollNumber)
{
    fstream file("students.dat", ios::binary | ios::in);
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

void modifyByRoll(int rollNumber, int marks)
{
    Student st;
    bool found = false;
    fstream file("students.dat", ios::binary | ios::in);
    fstream tempFile("temp.dat", ios::out | ios::binary);
    while (file.read(reinterpret_cast<char *>(&st), sizeof(st)))
    {
        if (st.getRoll() == rollNumber)
        {
            st.setMarks(marks);
            found = true;
        }
        tempFile.write(reinterpret_cast<char *>(&st), sizeof(st));
    }

    if (!found)
    {
        cout << "Student with roll number " << rollNumber << " not found." << endl;
    }

    file.close();
    tempFile.close();
    remove("students.dat");
    rename("temp.dat", "students.dat");
}

int main()
{
    Student st[3], st2[3];
    fstream file;
    file.open("students.dat", ios::out | ios::binary);
    if (!file)
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    for (int i = 0; i < 3; i++)
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
    for (int i = 0; i < 3; i++)
    {
        st2[i].retrieve(file);
        st2[i].display();
    }
    file.close();
    displayByRoll(2);
    modifyByRoll(2, 80);
    displayByRoll(2);

    return 0;
}