// Write a function template for the function power() which has two parameters base and exp and returns base^exp.
// the type of base is the parameter to the template and type of exp is int.
// If the exp is negative then it must be converted to its positive equivalent.


#include<iostream>
#include<cmath>
using namespace std;

template<class t>
float power(t base, t exp) {
	if(exp<0)
		exp = -exp;
	return pow(base,exp);
}

int main(){
	int a, b;
	cout<<"Value of base:"; cin>>a;
	cout<<"Value of exponential: ";cin>>b;
	cout<<power<int>(a,b);
	float t1,t2;
	cout<<endl<<"Float value of base: ";cin>> t1;
	cout<<"Float value of exponential: ";cin>> t2;
	cout<<power(t1,t2);
    return 0;
}
