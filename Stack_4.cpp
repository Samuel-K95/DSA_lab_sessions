#include <iostream>

using namespace std;

const int a = 26;
char sort[a];
int y=-1;

bool is_sort_empty()//check if the sorted array is empty
{
    if (y==-1)
    {
        return true;
    }
    else{
        return false;
    }
}

bool is_sort_full()//check if  sorted array is full
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

int push_sort(char c)
{
    int temp=0;
    if(is_sort_full())
    {
        cout<<"stack overflow: there is no space in the array"<<endl;
    }
    else if(! is_sort_full())
    {
        y++;
        sort[y]=c;
        for(char i=0; i<y; i++)//sort the new array in reversed order. 
        {
            for(char j=0; j<y; j++)
            {
                if(sort[j]<sort[j+1])
                {
                    temp=sort[j+1];
                    sort[j+1]=sort[j];
                    sort[j]=temp;
                }
            }
        }
        cout<<"the elements in the sorted array are: "<<endl;
        for(char i=0; i<=y; i++)
        {
            cout<<sort[i]<<" ";
        }
        cout<<endl;
        }
}

int pop_sort()
{
    if(is_sort_empty())
    {
        cout<<"stack underflow: there are no elements in the array anymore"<<endl;
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
    is_sort_empty()=check if an array is empty
    is_sort_full()= check check if an array is full
    push_sort( char c)=push character to an array
    pop_sort()= pop characters from an array
    */
   for(char i='a'; i<='z'; i++)
   {
    push_sort(i);
   }

}