#include <iostream>

using namespace std;

int insert_sort(int arr[], int x)
{
    int temp;
 
    for(int i =0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if (i==j)
            {
                continue;
            }
            else if( arr[i]>arr[j])
            {
                continue;
            }
            else if(arr[i]<arr[j])
            {
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0; i<x; i++)
     {
        cout<<arr[i]<<" ";
     }
     return 0;
}

int bubble_sort(int arr[], int x)
{
    int temp, temp1;
    for(int i=0; i<x-1; i++)
    {
        for(int j=0; j< x-1; j++)
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
    cout<<"The sorted array is:"<<endl;
    for(int i=0; i<x; i++)
     {
        cout<<arr[i]<<" ";
     }
    return 0;
}

int selection_sort(int arr[], int x)
{
    int val, temp, z;
    for(int i=0; i<x-1; i++)
    {
        int min = i;
        for(int j=i+1; j<x; j++)
        {
            if (arr[j]<arr[min])
            {
                min= j;
            }            
        }
        temp= arr[i];
        arr[i]= arr[min];
        arr[min]= temp;
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0; i<x; i++)
     {
        cout<<arr[i]<<" ";
     }
    return 0;
}

int main()
{
    int a[]={110,13,2,4,5,23,6,7,8,45,3,56,9,10, 100, 98, 102};
    int y= sizeof(a)/sizeof(a[0]);
    cout<<"The unsorted array is:"<<endl;
    for(int i=0; i<y; i++)
     {
        cout<<a[i]<<" ";
     } 
     cout<<endl;
     int options;
    cout<<"choose between 1, 2and 3:"<<endl;
    cin>>options;
    switch(options)
    {
        case 1:
        {
            bubble_sort(a, y);
            break;
        }   
        case 2:
        {
            selection_sort(a, y);
            break;
        }
        case 3:
        {
            insert_sort(a, y);
            break;
        }
    }

  
     return 0;
}
