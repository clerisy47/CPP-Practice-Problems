// 2. WAP for finding the sum and average of an array elements using function template.

#include<iostream>
using namespace std;

const int SIZE=5;


template <class t>
void sumAndAverage(t * a){
	t sum = 0;
	for(int i = 0;i < SIZE;i++){
		sum += a[i];
	}
	cout << "Sum = " << sum << "\t average = " << sum / SIZE << endl;
}

int main(){
	int t[] = {2,4,5,6,78};
	sumAndAverage<int>(t);
	float g[] = {2.2,4.4,22.1,44.3,2.1};
	sumAndAverage<float> (g);
	return 0;
}
