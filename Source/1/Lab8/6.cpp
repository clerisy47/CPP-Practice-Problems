// WAP to convert type of object of polar class to rectangle class and vice versa. Apply constructor functions in both the class.

#include <iostream>
#include <cmath>
using namespace std;


class rectangle;
class polar {
    float r,theta;
    public:
        polar(float p=0,float q=0): r(p), theta(q) {}
        polar(rectangle);
        float get_r() {
            return r;
        }
        float get_theta() {
            return theta;
        }
        void display() {
            cout << "Polar: (" << r << ", " << theta << ")" << endl;
        }
};

class rectangle {
    float x,y;
    public:
        rectangle(float p=0, float q=0): x(p), y(q) {}
        rectangle(polar p) {
            float r = p.get_r();
            float theta = p.get_theta();
            x = r * cos(theta);
            y = r * sin(theta);
        }
        float get_x() {
            return x;
        }

        float get_y() {
            return y;
        }

        void display() {
            cout << "Rectangle: (" << x << "," << y << ")" << endl;
        }
};

polar::polar(rectangle r) {
    float x = r.get_x();
    float y = r.get_y();
    r = sqrt(x*x+y*y);
    theta = atan(y/x);
}

int main() {
    rectangle r1(1,2), r2;
    polar p1(2,30),p2;
    r2 = p1;
    p2 = r1;
    p1.display();
    r2.display();
    r1.display();
    p2.display();
    return 0;
}
