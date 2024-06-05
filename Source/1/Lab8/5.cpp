// WAP to convert object of a class that represents weight of gold in tola to object of class that represents weight in grams.
// 1 tola = 1.664 gm

#include <iostream>
using namespace std;

class tola {
    float tol;
    public:
        tola(float t=0.0): tol(t) {}
        float gettola() {
            return tol;
        }
        void display() {
            cout << "Weight in tola: " << tol << endl;
        }

};


class grams {
    float gms;
    public:
        grams(float g = 0.0):gms(g) {}
        grams(tola t) {
            gms = 1.664 * t.gettola();

        }
        void display() {
            cout << "Weiht in grams: " << gms << endl;
        }

};

int main() {
    tola t(1);
    t.display();
    grams g;
    g = t;
    g.display();
    return 0;
}
