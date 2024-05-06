// Write a program that stores the information about the student(student id,DOB,department
// and address) in a structure until user says "no". After reading the data, write it to a file
// then display the content of the file in the proper format on your output screen.

#include <iostream>
#include <fstream>
using namespace std;

struct DOB {
    int yr,mo,day;
};

struct student {
    int student_id;
    DOB d;
    char department[25];
    char address[30];
};

int main() {
    student s;
    char ch;
    fstream fout;
    fout.open("students.txt",ios::out | ios::binary | ios::app);
    do {
        cout << "Enter the student id:";
        cin >> s.student_id;
        cout << "DOB:";
        cin >> s.d.yr;
        cin >> s.d.mo;
        cin >> s.d.day;
        cout << "Department:";
        cin >> s.department;
        cout << "Address";
        cin >> s.address;
        fout.write((char *)&s,sizeof(s));
        cout << "Do you want to continue? (y/n):";
        cin>>ch;
    }
    while(ch =='y');
    fout.close();
    fstream fin;
    fin.open("students.txt",ios::in | ios::binary);
    while(fin.read((char*)&s,sizeof(s))) {
        cout << "Id:" << s.student_id << endl;
        cout << "DOB: " << s.d.yr << "/" << s.d.mo << "/" << s.d.day << endl;
        cout << "Address: " << s.address << endl;
    }
    fin.close();
    return 0;
}
