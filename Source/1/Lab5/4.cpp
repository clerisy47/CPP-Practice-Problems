// Write a meaningful program that shows the use of static data member and static member function.

#include <iostream>

using namespace std;

class demo {
    static int count;
    public:
        demo() {
            cout << "Created a object" <<endl;
            count++;
        }
        static void displaycount()
        {
            cout << "Count=" << count << endl;
        }
};

int demo::count = 0;
int main()
{
    demo d1;
    demo::displaycount();
    demo d2;
    demo::displaycount();
    demo d3;
    demo::displaycount();
    return 0;
}
