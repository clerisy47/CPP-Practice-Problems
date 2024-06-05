// WAP to add two matrices by overloading + operator.

#include <iostream>
using namespace std;

const int ROW = 3;
const int COL = 3;

class Matrix {
    int arr[ROW][COL];
    public:
        void input() {
            cout << "Enter the elements of the Matrix: " << endl;
            for (int i=0;i<ROW;i++) {
                for(int j=0;j<COL;j++) {
                    cout << "a(" << i+1 << "," << j+1 << "):";
                    cin >> arr[i][j];
                }

            }
        }
        void display() {
            for (int i=0;i<ROW;i++) {
                cout << "|";
                for(int j=0;j<COL;j++) {
                    cout << arr[i][j] << " ";
                }
                cout << "|\n";
            }
        }
        Matrix operator+(Matrix b) {
            Matrix temp;
            for(int i=0;i<ROW;i++) {
                for(int j=0;j<COL;j++)
                    temp.arr[i][j] = arr[i][j]+ b.arr[i][j];
            }
            return temp;
        }
};


int main() {
    Matrix m1,m2,m3;
    m1.input();
    m2.input();
    m1.display();
    cout << "+" << endl;
    m2.display();
    cout << "=" << endl;
    m3 = m1 + m2;
    m3.display();
    return 0;
}
