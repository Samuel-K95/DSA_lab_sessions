#include <iostream>

using namespace std;

int main()
{
    string first ="Hello World", second;
    string *x = &first, *y = &second;
    *y=*x;
    cout<<second;

    return 0;
}
