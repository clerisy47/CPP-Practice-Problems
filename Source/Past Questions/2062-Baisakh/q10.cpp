// Write a program that catches multiple exceptions using exception class.

#include <iostream>
using namespace std;
const int size = 4;

class Stack {
    int top;
    int arr[size];
    public:
        Stack() {
            top  = -1;
        }
        void push(int x) {
            if(top == size-1) {
                throw stack_full();
            }
            top++;
            arr[top] = x;
        }
        void pop() {
            if(top == -1)
                throw stack_empty();
            top--;
        }
        class stack_full {
            public:
            char *message;
                stack_full() {
                    message = "Stack overflow";
                }
        };
        class stack_empty {
            public:
                char *message;
                stack_empty() {
                    message = "Stack empty";
                }
        };
};
int main() {
    try {
        Stack s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.pop();
        s.pop();
    }
    catch (Stack::stack_full sf) {
        cout << "Error: " << sf.message;
    }
    catch (Stack::stack_empty se) {
        cout << se.message;
    }
    return 0;
}
