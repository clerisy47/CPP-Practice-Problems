// WAP having student as an abstract class and create derived class such as engineering, science and medical.
// Create their objects, process them and access them using base class pointer.


#include <iostream>
using namespace std;

class student {
    protected:
        int roll;
        char name[25];
    public:
        virtual void display() = 0;
        virtual void input() = 0;
};

class engineering: public student {
    int back_exams;
    public:
        void input() {
            cout << "Enter name:";
            cin >> name;
            cout << "Enter roll number:";
            cin >> roll;
            cout << "Number of back exams:";
            cin >> back_exams;
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll number: " << roll << endl;
            cout << "Number of backs: " << back_exams << endl;


        }
};

class science: public student {
    float percent;
    public:
        void input() {
            cout << "Enter name:";
            cin >> name;
            cout << "Enter roll number:";
            cin >> roll;
            cout << "Percentage: ";
            cin >> percent;
        }

        void display() {
            cout << "Name: " << name << endl
                 << "Roll no:" << roll << endl
                 << "Percentage:" << percent << endl;

        }
};

class medical:public student {
    int num_operations;
    public:
        void input() {
            cout << "Enter name:";
            cin >> name;
            cout << "Enter roll number:";
            cin >> roll;
            cout << "Number of operations:";
            cin >> num_operations;
        }
        void display() {
            cout << "Name: " << name << endl
                 << "Roll no:" << roll << endl
                 << "Number of operations: " << num_operations << endl;
        }
};

int main() {
    engineering e;
    science s;
    medical m;
    student *sp[] = {&e,&s,&m};
    for (int i=0;i<3;i++) {
        sp[i]->input();
        sp[i]->display();
    }
    return 0;
}
