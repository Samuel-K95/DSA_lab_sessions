#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* previous;
};

int count_list(Node* n)
{
    int x=0;
    while(n!= NULL)
    {
        n=n->next;
    }
    return x;
}

void insert(int x)
{
    Node * N= new Node;
    N->data=x;
}

int main()
{

    Node * head;
    Node* tail;
    
    Node* node= new Node;
    node->data=10;
    head= node;
    tail= node;
    

    node= new Node;
    node->data= 20;
    node->next= NULL;
    node->previous= tail;
    tail->next=node;
    tail=node;
    

    int y= int(count_list(head));
    cout<<y;




}


