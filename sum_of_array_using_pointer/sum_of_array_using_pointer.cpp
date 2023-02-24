#include <iostream>

using namespace std;

int main()
{
    int arr[5] ={1, 2, 3, 4,5};
    int *y = arr;
    int sum =0;
    for (int i =0; i<5; i++)
    {
        sum+=*(y+i);
    }
    cout<<sum;
    return 0;
}
