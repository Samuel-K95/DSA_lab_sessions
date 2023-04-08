#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,4,2,6,78,45,3,67,8,23,9,56,4,200,100};
    int x = sizeof(arr)/ sizeof(arr[0]), temp;
    for (int i=0; i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1; i<x; i++)
    {
        for(int j=i; j>0; j--)
        {
            if(arr[j-1]> arr[j])
            {
                temp=arr[j];
                arr[j]= arr[j-1];
                arr[j-1]= temp;
            }
        }
    }

    for (int i=0; i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}