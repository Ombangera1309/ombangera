#include<iostream>
using namespace std;

int main()
{
    float l, w, a;

    cout<<endl<<"Enter the length of the rectangle:";
    cin>>l;

    cout<<endl<<"Enter the width of the rectangle:";
    cin>>w;

    // calculate area of rectangle
    a=l*w;

    //It will print the final output
    cout<<endl<<"\nArea of rectangle ="<<a<<"units";

    return 0;
}