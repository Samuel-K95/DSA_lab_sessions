#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int x= sizeof(arr)/sizeof(arr[0]);
    int first=arr[0];
    int last= arr[x-1];
    int mid, target= 11, answer;
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
    return 0;
}