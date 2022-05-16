#include<iostream>
using namespace std;

int main()
{
    int divisor, dividend, remainder, quotient;

    cout<<endl<<"Enter dividend:";
    cin>>dividend;

    cout<<endl<<"Enter divisor:";
    cin>>divisor;

    quotient=dividend / divisor;
    remainder=dividend % divisor;

    cout<<endl<<"Quotient ="<<quotient;

    cout<<endl<<"Remainder ="<<remainder;

    return 0;
}