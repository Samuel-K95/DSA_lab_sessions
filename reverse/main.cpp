#include <iostream>

using namespace std;


int main()
{
    int x;
    cin>>x;
    int store[x];
    for (int i=0; i<x; i++)
    {
        cin>>store[i];
    }cout <<endl;
    for (int i=1;i<=x;i++)
    {
        cout<<store[x-i]<<endl;
    }


    return 0;
}
