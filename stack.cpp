#include<iostream>
using namespace std;

struct stack
{
   int st[5];
   int top;
};
typedef struct stack stack;

stack s;

void push();
void pop();
void peep();
void disp();
void isempty();
void isfull();

int main()
{
    int ch;
    s.top=-1;
    do
    {
       cout<<endl<<" MENU OF STACK :";
       cout<<endl<<endl<<"1. PUSH ";
       cout<<endl<<"2. POP ";
       cout<<endl<<"3. PEEP ";
       cout<<endl<<"4. DISPLAY ";
       cout<<endl<<"5. ISEMPTY "; 
       cout<<endl<<"6. ISFULL ";
       cout<<endl<<"7. EXIT";

       cout<<endl<<endl<<"Enter Your Choice :";
       cin>>ch;

       switch(ch)
       {
            case 1:
                  push();
                  break;

           case 2:
                pop();
                break;
            
            case 3:
                  peep();
                  break;
             
            case 4:
                  disp();
                  break;

            case 5:
                 isempty();
                 break;

            case 6:
                 isfull();
                 break;

       }
    }while (ch>=1&&ch<=6);  
    
}

void push()
{
    if (s.top==4)
        cout<<endl<<"THE STACK IS OVERFLOWING....";
    else
    {
        s.top++;

        cout<<endl<<"Enter the element in the stack :";
        cin>>s.st[s.top];

        cout<<endl<<endl<<s.st[s.top]<<" is pushed in the stack.";    

    }     
}

void pop()
{
    if(s.top==-1)
    cout<<endl<<"SORRY THE STACK IS EMPTY....";
    else
    {
       cout<<endl<<s.st[s.top]<<"The Element is Poped..";

       s.top--;

    }
}
void disp()
{
    int i;

    if (s.top==-1)
    cout<<endl<<"THE STACK IS EMPTY";
    else
    {
        for(i=s.top; i>=0; i--)
        {
            cout<<endl<<" "<<s.st[i];
         }

    } 
}
void peep()
{
    if(s.top==-1)
    cout<<endl<<"THE STACK IS EMPTY......";

    else
    cout<<endl<<s.st[s.top]<<"  is peeped";
}
void isempty()
{
    if(s.top==-1)
    cout<<endl<<"YES, THE STACK IS EMPTY.";

    else
    cout<<endl<<"THERE IS SOMETHING IN THE STACK.";
}
void isfull()
{
    if(s.top==4)
    cout<<endl<<"YES, THE STACK IS FULL.";

    else
    cout<<endl<<"NO...";
}