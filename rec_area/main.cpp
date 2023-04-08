#include <iostream>

using namespace std;

int main()
{
    int x, sum, y;
    cin>>x;
    y=x;
    while (y>0)
    {
        sum+=y%10;
        y=x/10;
    }
    for (int i=x; ; i++)
    {
        if (i%sum==0)
        {
            x=i;
            break;
        }
    }
    cout<<x;

}
