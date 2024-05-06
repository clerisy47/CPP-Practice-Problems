#include <iostream>
using namespace std;


class times {
    int hr;
    int min;
    int sec;
    char *period;
    public:
        times(int h,int m, int s, char *p)
        {
            hr = h;
            min = m;
            sec = s;
            period = p;
        }
        void convert_24() {
            if(period == "PM" && hr!=12) {
                hr = hr + 12;
            }
            if(hr==12 && period=="AM") {
                hr=0;
            }
        }
        void display_12() {
            if(hr>12) {
                hr = hr-12;
                period = "PM";
            }
            if(hr==0) {
                hr = 12;
                period = "AM";
            }
            cout << hr << ":" << min << ":" << sec << " " << period << endl;
        }

        void display_24() {
            convert_24();
            cout << hr << ":" << min << ":" << sec << endl;
        }
};

int main() {
    times t(1,10,30,"PM");
    times t1(12,0,0,"AM");
    t.display_12();
    t.display_24();
    t.display_12();
    t1.display_24();
    t1.display_12();
    return 0;
}
