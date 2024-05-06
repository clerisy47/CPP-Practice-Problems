// Write a meaningful program to use both exception specification for function.

#include<iostream>
using namespace std;

void test(int b) throw (int,double){
		if(b==0)
            throw b;
		if(b==1)
            throw 1.0;
        // throw 'r'; //error
}
int main(){
	try {
        test(0);
        test(1);
	}
    catch(int c){
		cout<<"c = "<<c;
    }
	catch(double a){
		cout<<"a = "<<a;
    }
    return 0;
}
