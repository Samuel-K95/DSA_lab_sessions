#include <iostream>

using namespace std;

int main()
{
 int a[5]={5,4,3,2,1};
 int b[5]={10,9,8,7,6};
 int z= 10;
 int arr[10];
 if(a[0]<b[0])
 {
    for(int i=0; i<5; i++)
    {
        arr[i]=a[4-i];
    }
    for(int j=0; j<5; j++)
    {
        arr[5+j]= b[4-j];
    }
 }
 for(int i=0; i<10;i++)
 {
    cout<<arr[i]<<" ";
 }
}
