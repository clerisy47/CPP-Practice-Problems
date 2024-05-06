/*Write a class template for queue class. Assume the programmer using 
the queue won't make mistakes, like exceeding the capacity of the queue, 
or trying to remove an item when the queue is empty. Define several queues 
of different data types and insert and remove data from them.*/
#include<iostream>//or
using namespace std;
template<class T>
class Queue
{
    T data[5];
    int n;
    int check;
public:
    Queue()
    {
        n=0;
        check=0;
        for(int i=0;i<5;i++)
        {
            data[i]=0;
        }
    }
    void ins(T a)
    {
        data[n]=a;
        n++;
    }
    void del()
    {
        check++;
    }
    void get()
    {
        for(int i=check;i<n;i++)
        {
            cout<<data[i]<<" ";
        }
    }
};
int main()
{
    cout<<"For integer: "<<endl;
    Queue<int> iobj;
    iobj.ins(4);
    iobj.ins(7);
    iobj.ins(29);
    cout<<"The integer data are: ";
    iobj.get();
    iobj.del();
    cout<<"The integer data are: ";
    iobj.get();
    cout<<endl<<"\n\nFor float:"<<endl;
    Queue<float> fobj;
    fobj.ins(2.5);
    fobj.ins(12.35);
    fobj.ins(45.678);
    cout<<"The float data are: ";
    fobj.get();
    fobj.del();
    cout<<"The float data are: ";
    fobj.get();
    return 0;
}


