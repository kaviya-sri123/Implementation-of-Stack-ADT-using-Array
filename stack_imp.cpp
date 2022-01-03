#include "stack_header.h"
void Stack::push(int e)
{
    if(top == size-1)
    {
        cout<<"\nStack Overflow.\n\n";
    }
    else
    {
        top++;
        passenger_id[top] = e;
        cout<<"\nPassenger ID "<<e<<" pushed into stack.\n\n";
    }
}
void Stack::pop()
{
    if(top == -1)
    {
        cout<<"\nStack Underflow.\n\n";
    }
    else
    {
        int popped_element;
        popped_element = passenger_id[top];
        cout<<popped_element<<" popped out from stack.\n\n";
        top--;
    }
}
void Stack::display()
{
    if(top == -1)
    {
        cout<<"\nStack is empty.\n\n";
    }
    else
    {
        cout<<"Passenger IDs : ";
        for(int i=top;i>=0;i--)
        {
            cout<<passenger_id[i]<<"  ";
        }
        cout<<"\n\n";
    }
}