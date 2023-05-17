#include <iostream>

using namespace std;

int main()
{
    string x = "Hello World";
    string *y = &x;
    cout<<(*y).size();
    return 0;
}
