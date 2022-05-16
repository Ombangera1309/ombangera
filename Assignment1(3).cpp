#include<iostream>
using namespace std;

int main()
{
    int width, length, area, perimeter;

    cout<<endl<<"FInd the Area and perimeter of a Rectangle:";

    cout<<endl<<"Input the length of the rectangle:";
    cin>>length;

    cout<<endl<<"Input the width of the rectangle:";
    cin>>width;
    area=(length*width);
    perimeter=2*(length+width);
    cout<<endl<<"The area of the rectangle is:"<<area;

    cout<<endl<<"The perimeter of the rectangle is:"<<perimeter;

    return 0;
}