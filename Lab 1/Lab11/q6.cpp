 // Write a meaningful program that can handle multiple exceptions.

#include<iostream>
using namespace std;

void test(int b){
		if(b == 0)
            throw 1;
		if(b == 1)
            throw 1.0;
		if(b == 2)
            throw 'e';
        cout << "Value of b is: " << b << endl;

}

int main(){
	try{
        test(3);
        test(4);
        test(0);
        test(1);
    }
    catch(int c) {
		cout<<"Integer exception";
    }
	catch(double a) {
		cout<<"Double exception";
    }
	catch(char e) {
		cout<<"Character exception";
    }
    return 0;
}
