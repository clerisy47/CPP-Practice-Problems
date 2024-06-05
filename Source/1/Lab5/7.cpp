// WAP to add and subtract two distances by using the concept of object as an argument and returning the object by the function.
// The distance has feet and inches as the member.

#include <iostream>
using namespace std;

class distances {
    int feet,inches;
    public:
    void input() {
    cout << "Enter the feet and inches";
    cin >> feet >> inches;
    }

    void display() {
        cout << feet << "feet " << inches << " inches"<< endl;
    }

    distances adddistance(distances d1,distances d2) {
        distances temp;
        temp.inches = d1.inches + d2.inches;
        temp.feet  = d1.feet + d2.feet + temp.inches/12;
        temp.inches = temp.inches%12;
        return temp;
    }
    distances subtractdistance (distances d1, distances d2) {
        distances temp;
        temp.feet  = 0;
        temp.inches = d2.inches - d1.inches;
        if (temp.inches<0)
        {
            temp.inches = temp.inches +12;
            temp.feet = temp.feet-1;

        }
        temp.feet = temp.feet + d2.feet-d1.feet;
        return temp;
    }
};

int main() {
    distances d1,d2,d3,d4;
    d1.input();
    d2.input();
    cout << "On adding: ";
    d3.adddistance(d1,d2).display();
    cout << "On subtracting: ";
    d4.subtractdistance(d1,d2).display();
    return 0;
}
