#include<iostream>
using namespace std;    
class Node
{
    public:
    int data;
    Node* link;
    Node(int value)
    {
        data=value;
        link=NULL;
    }
};
Node* top=NULL;
bool isempty()

{
    return (top==NULL);
}
void push(int value)
{
    Node* ptr=new Node(value);
    ptr->link=top;
    top=ptr;        
    cout<<value<<" pushed into stack\n";
}
void pop()
{
    if(isempty())
    {
        cout<<"Stack Underflow\n";
    }
    else
    {
        Node*ptr=top;
        cout<<ptr->data<<" popped from stack\n";
        top=top->link;
        delete ptr;
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
        cout<<"Top element is: "<<top->data<<"\n";
    }
}