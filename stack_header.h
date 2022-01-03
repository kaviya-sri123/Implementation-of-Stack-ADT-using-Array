#include <iostream>
#define size 5
using namespace std;
class Stack
{
    int passenger_id[size];
    int top;
    public:
        Stack()
        {
            top = -1;
        }
        void push(int e);
        void pop();
        void display();
};