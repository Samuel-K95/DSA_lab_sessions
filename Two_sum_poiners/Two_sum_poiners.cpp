#include<iostream>

using namespace std;

int main()
{
    int x = 10, y = 3;
    int *a = & x, *b = &y;
    cout<<*a + *b<<endl;
    return 0;
}
