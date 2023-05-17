#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};
    Node* h;
    Node* n;
    Node* t;
    Node* b;



void delete_list(int num)
{
    Node * delet_ptr= NULL;
    t=h;
    n=h;
    while( n != NULL && n->data != num)
    {
        t= n;
        n= n->next;
    }
    if (n==NULL)
    {
        cout<<"the data you provided was not found"<<endl;
        delete delet_ptr;
    }
    else if ( n->data == num)
    {
        delet_ptr= n;
        n= n->next;
        t->next = n;
        delete delet_ptr;
    }
}

void print_list(Node* list)
{
    while (list != NULL)
    {
        cout<<list->data<<endl;
        list = list->next;

    }

}


int main()
{
    n= new Node;
    n->data= 0;
    h=n;
    t=n;

    n= new Node;
    n-> data = 2;
    t->next=n;
    t=t->next;

    n= new Node;
    n-> data = 3;
    t->next=n;
    t=t->next;

    n= new Node;
    n->data = 4;
    t->next= n;
    t=t->next;


    n=new Node;
    n->data = 5;
    t->next=n;
    n->next = NULL;
    delete_list(0);

    
    return 0;

}