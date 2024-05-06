// WAP for DMA for array of object and one single object.

#include <iostream>
using namespace std;
const int SIZE = 3;

class marks {
    float mark;
    public:
        void input() {
            cout << "Enter the marks" << endl;
            cin >> mark;
        }
        void output() {
            cout <<  "Marks = " << mark << endl;

        }
};

int main() {
    marks *m, *array_marks;
    m = new marks;
    array_marks = new marks[SIZE];
    cout << "DMA for single object" << endl;
    m->input();
    m->output();
    cout << "DMA for the array of object" << endl;
    for (int i=0;i<SIZE;i++) {
        array_marks[i].input();
        array_marks[i].output();
    }
    return 0;
}
