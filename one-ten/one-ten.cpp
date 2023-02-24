#include <iostream>

using namespace std;

int main()
{
    //using while loop
    int num = 1, num1 =1;
    while(num<11)
    {
        cout<<num;
        num++;
    }cout<<endl;
    //using do while
    do
    {
        cout<<num1;
        num1++;
    }while(num1<11);
    return 0;
}
