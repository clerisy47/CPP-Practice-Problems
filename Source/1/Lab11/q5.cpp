// Define a class to represent time. It should have memvber function to read and display the time.
// The function to read time should raise an exception if the user enter invalid values for hour, minutes and seconds.
// The exception thrown should contain an argument.
// The exception thrown should be thandled outside of the member functions of the class


#include<iostream>
using namespace std;

class Clock {
	int hour,min,sec;
	public:
	void input(){
			cout<<"Hour: ";cin>>hour;
			if(hour>24||hour<0)
				throw Exception('H');
			cout<<"Min: ";cin>>min;
			if(min>60 or min<0){
				throw Exception('M');
			}
			cout<<"Sec: ";cin>>sec;
			if(sec>60 or sec<0){
				throw Exception('S');
			}
	}
	void display(){
		cout<<"Time: " << hour<<" : "<<min<<" : "<<sec;
	}
	class Exception {
        public:
            char message;
            Exception(char m): message(m) {}
	};
};

int main() {
	Clock t;
	try {
        t.input();
        t.display();
    }
	catch (Clock::Exception err){
		switch(err.message) {
            case 'H': cout << "Hour can't be greater than 24." << endl;
                      break;
            case 'M': cout << "Minute can't be greater than 60." << endl;
                      break;
            case 'S': cout << "Second can't be greater than 60." << endl;
                      break;
		}
	}
    return 0;
}
