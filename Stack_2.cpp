#include<iostream>

using namespace std;

const int a = 20;
int arr[a], x;



bool isfull()
{
    if(x==a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

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
        cout<<arr[x]<<" has been popped"<<endl;
        return arr[x];
    }
}
void push(int y)
{
    if(isfull())
    {
        cout<<"stack overflow"<<endl;
        return;
    }
    else
    {
        arr[x]=y;
        x++;
        cout<<"you have just pushed "<<y<<endl;
        return;
    }
    
}


int main()
{
    cout<<x<<endl;
    cout<<isempty()<<endl;
    cout<<isfull()<<endl;
    for(int i=0; i<20; i++)
    {
        push(i);
    }
    cout<<isfull()<<endl;
    for(int i=0; i<20; i++)
    {
        pop();
    }
    cout<<isempty()<<endl;
}
