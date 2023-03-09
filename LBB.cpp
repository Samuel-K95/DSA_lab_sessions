#include<iostream>

using namespace std;

int main()
{
    //linear search
    int arr[]={ 1,4,2,5,3,9,6,8,7,10};
    int x= sizeof(arr)/sizeof(arr[0]);
    int target, answer;
    cout<<" which element do you want to search?"<<endl;
    cin>>target;
    for(int i=0; i<x; i++)
    {
        if(arr[i]==target)
        {
            answer= i;
            break;
        }
    }
    cout<<answer;
    cout<<endl;
    //sort the above array using bubble sort
    int temp, temp1;
    for(int i=0; i<x-1; i++)
    {
        for(int j=0; j< x-1-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp = arr[j];
                temp1= arr[j+1];
                arr[j]= temp1;
                arr[j+1]= temp;
            }
        }
    }
    // display the sorted array
    for(int i=0; i<x-1; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    // binary search from the sorted array
    int first=arr[0];
    int last= arr[x-1];
    int mid;
    while(first<=last)
    {
        mid= (first + last)/ 2;
        if(mid == target)
        {
            for(int j=0; j<x; j++)
            {
                if (arr[j] == target)
                {
                    answer = j;
                    break;
                }
            }
            cout<<mid<<" "<<answer;
            break;
        }
        else if(mid > target)
        {
            last = mid-1;
        }
        else if(mid<target)
        {
            first = mid + 1;
        }
        else
        {
            cout<<"not found"<<endl;
        }
        
    }

}