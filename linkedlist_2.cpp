#include <iostream>

using namespace std;


struct Node
{
    int data;
    Node* link;
};
Node* head = NULL;

void reverselist()
{
    Node* head = NULL;
    Node *p, *c, *n;
    p=NULL;
    c=head;
    while(c!=NULL)
    {
        n=c->link;
        c->link=p;
        p=c;
        c=n;
        cout<<n->data<<" ";
    }
    head=p;
}
int main()
{
    reverselist();
}