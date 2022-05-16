#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<endl<<"Enter an Alphabet:";
    cin>>ch;

    switch(ch){
        // check lower case vowel letters

        case 'a':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'e':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'i':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'o':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'u':
        cout<<endl<<ch<<" is a vowel.";
        break;

        // check upper case vowel letters
        case 'A':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'E':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'I':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'O':
        cout<<endl<<ch<<" is a vowel.";
        break;

        case 'U':
        cout<<endl<<ch<<" is a vowel.";
        break;

        default:
        cout<<endl<<ch<<" is a consonant.";
        break;


    }

    return 0;

}