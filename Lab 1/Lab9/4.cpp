// WAP with a class cricketer that has data member to repesent name, age and number of match played.
// From this class cricketer, derive two classes, bowler and batsman.
// The bowler class should have number of wicket as data member and batsman class should have number of runs and number of centuries as data members.
//  Use appropriate member functions in all classes to make your program meaningful.

#include <iostream>
using namespace std;

class Cricketer {
    protected:
        char name[50];
        int age;
        int num_matches;
        public:
            void input() {
                cout << "Enter the name";
                cin >> name;
                cout << "Enter the age";
                cin >> age;
                cout << "Enter the number of matches:";
                cin >> num_matches;
            }
            void display() {
                cout << "Name:" << name << endl;
                cout << "Age:" << age << endl;
                cout << "Number of matches:" << num_matches << endl;
            }
};

class Bowler: public Cricketer {
    int num_wicket;
    public:
        void input() {
            Cricketer::input();
            cout << "Enter the number of wickets:";
            cin >> num_wicket;

        }
        void display() {
            Cricketer::display();
            cout << "Number of wickets: " << num_wicket << endl;
        }
};

class Batsman: public Cricketer {
    int num_runs;
    public:
        void input() {
            Cricketer::input();
            cout << "Enter the number of runs:";
            cin >> num_runs;
        }
        void display() {
            Cricketer::display();
            cout << "Number of runs:" << num_runs << endl;
        }
};

int main() {
    Bowler lee;
    Batsman villiers;
    lee.input();
    lee.display();
    villiers.input();
    villiers.display();
    return 0;
}
