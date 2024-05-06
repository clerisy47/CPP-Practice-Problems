/*Write a program to create a userdefined manipulator that will format 
the output by setting the width, precision and fill character at the 
same time by passing arguments.*/
#include<iostream>//or
#include<iomanip>
using namespace std;
class manip
{
    int Width,Precision;
    char fill_char;
public:
    manip(int width,int precision,char fillchar):Width(width),Precision(precision),fill_char(fillchar){};
    friend ostream& operator <<(ostream& output, manip obj);
};
  ostream & operator<<(ostream& output,manip obj)
    {
        output<<setw(obj.Width);
        output<<setprecision(obj.Precision);
        output<<setfill(obj.fill_char);
        return output;
    }
    manip setvalue(int width,int precision,char fillchar)
    {
        return manip(width,precision,fillchar);
    }
int main()
{
 cout << setvalue(10,3,'*')<<28.66565544;
}


