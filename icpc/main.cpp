#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
    int a;
    cin>>a;
    int temp,c, sum=0, arr[a];

    for (int i=0; i<a; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    c=0;
    for (int i=0; i<a/3; i++)
    {
        arr[a-3-c]=0;
        c+=3;
    }
    for (int i=0; i<a; i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
