#include<iostream>

using namespace std;

struct Node
{
    int data;

    Node* link;
};

Node *h= NULL;

void insert_front(int x)
{
    Node* New= new Node;
    New->data = x;
    New->link =h;
    h=New;
};

void print_list()
{
    while(h!=NULL)
    {
        cout<<h->data<<" ";
        h=h->link;
    }
}

int main()
{
    insert_front(10);
    insert_front(100);
    insert_front(40);
    print_list();
    return 0;
}