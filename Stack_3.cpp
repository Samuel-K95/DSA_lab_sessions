
#include <iostream>

using namespace std;

const int a = 20;
int temp[a], sort[a], x=-1, y=-1;

bool is_temp_empty() //check if the temporary stack is empty
{
    if (x==-1)
    {
        return true;
    }
    else{
        return false;
    }
}
bool is_sort_empty()//check if the sorted stack is empty
{
    if (y==-1)
    {
        return true;
    }
    else{
        return false;
    }
}

bool is_temp_full()//check if temporary stack is full
{
    if(x==a)
    {
        return true;
    }
    else{
        return false;
    }
}
bool is_sort_full()//check if  sorted stack is full
{
    if(y==a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int pop_temp()//pop element from the temporary stack
{
    if(is_temp_empty())
    {
        cout<<"stack underflow: the stack is empty";
        return -1;
    }
    else
    {
        x--;
        cout<<temp[x]<<" has just been popped from the temporary stack"<<endl;
        return (temp[x]);
    }
}
void push_temp(int c)//push elements in the temporary stack
{
    if(is_temp_full())
    {
        cout<<"stack overflow: there is no space in the stack"<<endl;
        return;
    }
    else if(! is_temp_full())
    {
        temp[x]=c;
        x++;
        cout<<"you have just pushed "<<c<< " on the temporary stack"<<endl;
    }
    return;
}
int push_sort()
{
    int temp=0;
    if(is_sort_full())
    {
        cout<<"stack overflow: there is no space in the stack"<<endl;
    }
    else if(! is_sort_full())
    {
        if(is_temp_empty())
        {
            cout<<"nothing to push"<<endl;
        }
        else{
            y++;
            sort[y]=pop_temp();
            for(int i=0; i<y; i++)//sort the new stack after accepting the element popped from the temporary stack
            {
                for(int j=0; j<y; j++)
                {
                    if(sort[j]>sort[j+1])
                    {
                        temp=sort[j+1];
                        sort[j+1]=sort[j];
                        sort[j]=temp;
                    }
                }
            }
            cout<<"the elements in the sorted stack are: "<<endl;
            for(int i=0; i<=y; i++)
            {
                cout<<sort[i]<<" ";
            }cout<<endl;
        }
    }
}
int pop_sort()
{
    if(is_sort_empty())
    {
        cout<<"stack underflow: there are no elements in the stack anymore"<<endl;
    }
    else if(! is_sort_empty())
    {
        y--;
        cout<<sort[y]<<" has just been popped"<<endl;
        return sort[y];
    }
}

int main()
{
    /*the main functions are:
    is_temp_empty(),is_sort_empty()=check if the stack is empty
    is_temp_full(),is_sort_full()= check check if the stack is full
    push_temp(int x), push_sort()=push elements to a stack
    pop_temp(), pop_sort()= pop elements from a stack
    */
}