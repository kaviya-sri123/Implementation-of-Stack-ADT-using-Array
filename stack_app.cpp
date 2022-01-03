#include "stack_header.h"
int main()
{
    Stack s;
    int ch;
    do
    {
        cout<<"==========MENU==========\n";
        cout<<"\t1.Push\n";
        cout<<"\t2.Pop\n";
        cout<<"\t3.Display\n";
        cout<<"\t4.Exit\n";
        cout<<"========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                int e;
                cout<<"Enter the element to be pushed : ";
                cin>>e;
                s.push(e);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Enter a valid choice.\n";
                break;
        }
    }while(ch != 4);
    return 0;
}