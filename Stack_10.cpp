#include<iostream>

using namespace std;

int stack[5]={0,1,3,5,6}, x=5,z=-1;


struct Node{
    int data;
    Node* link;
};
Node* curr;
Node* n= new Node;



bool isempty()
{
    if (x==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int pop()
{
    if (isempty())
    {
        cout<<"stack underflow : there are no elements in the stack"<<endl;
    }
    else
    {
        x--;
        return stack[x];
    }
}

void push()
{
    int y=pop();
    Node* temp= new Node;
    temp->data=y;
    curr->link=temp;
    curr=curr->link;
    if (y<n->data)
    {
        Node* swap= n;
        n=temp;
        temp= swap;
        cout<<n->data<<" ";   
    }
    else{
        n=temp;
        n->data=y;
        curr->link=n;
        curr=curr->link;
        cout<<n->data<<" "; 
    }

}

int main()
{
    n->data=z;
    n->link=NULL;
    curr=n;
    for(int i=0; i<5; i++)
    {
        push();
    }
}

