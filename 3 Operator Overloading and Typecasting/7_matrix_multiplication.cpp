#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];

public:
    Matrix(int a[3][3])
    {
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                this->a[i][j] = a[i][j];
            }
        }
    }
    void Display()
    {
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                cout << a[i][j] << endl;
            }
        }
    }
    friend Matrix operator*(Matrix &m1, Matrix &m2)
    {
        int temp[3][3];
        for (int i = 0; i <= 2; i++) // row1
        {
            for (int j = 0; j <= 2; j++) // col2
            {
                temp[i][j] = 0;              // row1*col2 is products's final dimenstions
                for (int k = 0; k <= 2; k++) // row2/col1 common elements
                {
                    temp[i][j] += m1.a[i][k] * m2.a[k][j];
                }
            }
        }
        return Matrix(temp);
    }
};

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix M1(a), M2(b);
    Matrix M3 = M1 * M2;
    M3.Display();
}