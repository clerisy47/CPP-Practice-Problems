//  WAP having a class to represent money. The class should have two integer members to represent rupees and paisa.
// Overload + and - for adding and subtracting the objects. Then overload >, < , == and != operator for comparing objects.

#include <iostream>
#include <cmath>
using namespace std;

class Money {
    float rupee,paisa;
    public:
        Money(float r = 0, float p=0): rupee(r), paisa(p) {}
        float Total() {
            float t = rupee*100 + paisa;
            return t;
        }
        void input() {
            cout << "Enter the Money in rupee and paisa" << endl;
            cin >> rupee >> paisa;
        }

        void display() {
            cout << rupee << " rupee and " << paisa << " paisa.";
        }
        int operator!=(Money m2) {
            if(Total()!=m2.Total())
                return 1;
            return 0;
        }
        int operator==(Money m2) {
            if(Total()==m2.Total())
                return 1;
            return 0;
        }
        int operator<(Money m2) {
            if(Total()<m2.Total())
                return 1;
            return 0;
        }
        int operator>(Money m2) {
            if(Total()>m2.Total())
                return 1;
            return 0;
        }
        Money operator+(Money m2) {
            int total = Total()+m2.Total();
            return Money(total/100,total%100);
        }
};

int main() {
    Money m1,m2;
    m1.input();
    m2.input();
    if(m1!=m2)
        cout << "They are unequal" << endl;
    if(m1==m2) {
        cout << "They are equal" << endl;
    } else if (m1>m2) {
        m1.display();
        cout << " is greater than ";
        m2.display();
        cout << endl;
    } else if(m1<m2) {
        m1.display();
        cout << " is less than ";
        m2.display();
        cout << endl;
    }
    cout << "On adding, we get ";
    (m1+m2).display();
    return 0;
}
