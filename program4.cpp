#include<iostream>
using namespace std;
const int MAX=10;
int stack[MAX];
int top=-1;
bool isempty()
{
    return (top==-1);
}
bool isfull()
{
    return (top==MAX-1);
}
void push(int value)
{
    if(isfull())
    {
        cout<<"Stack Overflow\n";
    }
    else
    {
        top++;
        stack[top]=value;
        cout<<value<<" pushed into stack\n";
    }
}
    void pop()
    {
        if(isempty())
        {
            cout<<"Stack Underflow\n";
        }
        else
        {
            cout<<stack[top]<<" popped from stack\n";
            top--;
        }
    }
    void showtop()
    {
        if(isempty())
        {
            cout<<"Stack is empty\n";
        }
        else
        {
            cout<<"Top element is: "<<stack[top]<<"\n";
        }
    }
    void peek()
    {
        if (isempty())
        {
            cout<<"stack is empty\n";
        }
        else
        {
            cout<<"Top element is: "<<stack[top]<<"\n";
        }
    }
    void displaystack()
    {
        if(isempty())
        {
            cout<<"Stack is empty\n";
        }
        else
        {
            cout<<"Stack elements (top to bottom are): ";
            for(int i=top;i>=0;i--)
            {
                cout<<stack[i]<<" ";
            }
            cout<<"\n";
        }
    }
    int main()
    {
        int choice,value;
        do
        {
            cout<<"\n============ STACK USING ARRAY=======\n";
            cout<<"1. Push\n";
            cout<<"2. Pop\n";
            cout<<"3. Show Top\n";
            cout<<"4. Display Stack\n";
            cout<<"5. Exit\n";
            cout<<"Enter your choice: ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    cout<<"Enter value to push: ";
                    cin>>value;
                    push(value);
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    showtop();
                    break;
                case 4:
                    displaystack();
                    break;
                case 5:
                    cout<<"Exiting...\n";
                    break;
                default:
                    cout<<"Invalid choice! Please try again.\n";
            }
        }while(choice!=5);
        

    }
