#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout<<endl<<"Before swapping.";

    cout<<endl<<"a ="<<a<<", b ="<<b;

    temp = a;
    a = b;
    b = temp;

    cout<<endl<<"\nAfter swapping.";

    cout<<endl<<"a ="<<a<<", b ="<<b;

    return 0;
}