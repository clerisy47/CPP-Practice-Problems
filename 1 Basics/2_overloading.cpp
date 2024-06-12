#include<iostream>
using namespace std;
int feet;

void convert(int feet, int &inch){
    inch = feet*12;
}

int convert(int feet){
    return feet*12;
}

int convert(){
    return feet*12;
}

int main(){
    int inch;
    cin>>feet;
    convert(feet, inch);
    cout<<"Two arguments "<<inch<<endl;
    cout<<"One argument "<<convert(feet)<<endl;
    cout<<"No arguments "<<convert()<<endl;
    return 0;
}