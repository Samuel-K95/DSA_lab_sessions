#include<iostream>

using namespace std;

int main()
{
    int arr[]={ 1,4,2,5,3,9,6,8,7,10};
    int x= sizeof(arr)/sizeof(arr[0]);
    int target = 6, answer;
    for(int i=0; i<x; i++)
    {
        if(arr[i]==target)
        {
            answer= i;
            break;
        }
    }
    cout<<answer;
    return 0;
}