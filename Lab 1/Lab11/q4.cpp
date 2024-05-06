// Create a class template with necessary member variables to represent vectors.
// Write initialization mechanism and overload * operator to find the scalar product of the two vectors.
// Also write a member function to display the vector.
// Use above template and write main funciton to perform scalar product of vectors of type int and double.

#include<iostream>
using namespace std;

const int size=3;

template<class T>
class vect
{
    T* v;
public:
    vect()
    {
        v = new T[size];
        for(int i=0;i<size;i++)
        {
            v[i]=0;
        }
    }
    vect(T* a)
    {
        v = new T[size];
        for(int i=0;i<size;i++)
        {
            v[i]=a[i];
        }
    }
    T operator*(vect &y)
    {
        T sum = 0;
        for(int i=0;i<size;i++)
        {
            sum += v[i]*y.v[i];
        }
        return sum;
    }
};
int main()
{
    int x[3]={1,2,3};
    int y[3]={2,3,4};
    vect <int>v1(x);
    vect <int>v2(y);
    int product = v1*v2;
    cout<< "Product = "<<product<<endl;
    double p[3]={1.8,2.6,3.4};
    double q[3]={2.8,3.2,4.7};
    vect <double>v3(p);
    vect <double>v4(q);
    double product2 = v3*v4;
    cout<< "Product = "<<product2<<endl;
    return 0;
}
