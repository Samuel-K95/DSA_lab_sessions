#include <iostream>

using namespace std;

int main()
{
    string X = "Hello ", Y= "World";
    string *x= &X, *y = & Y;
    string Z = *x + *y;
    cout<<Z;
    return 0;
}
