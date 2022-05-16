#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<endl<<"Enter any character:";
    cin>>ch;

    if(ch>=65 && ch<=90)
    cout<<endl<<"You entered an uppercase character.";

    else if(ch>=97 && ch<=122)
    cout<<endl<<"You entered a lowercase character. ";

    return 0;
}