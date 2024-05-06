// WAP with class template to represent array and add member functions to find minimum, maximum and sort the generic array.

#include<iostream>
using namespace std;

const int SIZE = 5;

template <class t>
class array{
	t a[SIZE];
	public:
	void input(){
		for(int i=0;i<SIZE;i++) {
			cout << "Element " << i+1 << ": ";
			cin>>a[i];
			}
	}
	void sort(){
	t m=a[0];
		for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			if (a[i]<a[j]){
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
		}

	}

	t minimum(){
		return a[0];
	}
	t maximum(){
		return a[4];
	}
};

int main(){
	array<int> x ;
	cout << "Enter the elements of array:" << endl;
	x.input();
	x.sort();
	cout<<"Min = "<<x.minimum() << endl;
	cout<<"Max = "<<x.maximum() << endl;
	array<float> y ;
	y.input();
	y.sort();
	cout<<"Min = "<<y.minimum() << endl;
	cout<<"Max = "<<y.maximum() << endl;

}
