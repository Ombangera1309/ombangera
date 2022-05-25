#include<iostream>
using namespace std;
int main()
{
    int count, j, m, num1, i, digit, sum, num;

    cout<<"Enter the range of value :";
    cin>>num1;

    cout<<"Armstrong number between 1 and "<< num1 <<" are :"<<endl;

    for (i = 1; i <= num1 ; i++)
    {
        count = 0;

        num = i;

        while(num > 0)
        {
            count++;
            num /= 10;

        }

        sum = 0;
        num = i;

        while (num > 0)

        {
            digit = num % 10;

            m=1;
            for(j=1;j<=count;j++)
            m*=digit;

            sum= sum + m;
            num /= 10;

        }
         
         if (sum == i)
         {
            cout<<i<<" ";

         }
         
        
    }
      return 0;

}