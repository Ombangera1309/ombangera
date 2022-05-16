#include<iostream>
using namespace std;

int main()
{
    float amount, discount, topaid;

    cout<<endl<<"Enter total amount:";
    cin>>amount;

    if(amount<=100)
    cout<<endl<<"Amount to be paid: "<<amount;

    else{
        if(amount>100 && amount<=200)
        {

            discount = (amount*5)/100;
            topaid = amount-discount;
        }
        else if(amount>200 && amount<=400)
        {

            discount = (amount*10)/100;
            topaid =amount-discount;
        }
        else if(amount>400 && amount<=800)
        {

            discount =(amount*20)/100;
            topaid = amount-discount;
        }
        else
        {

            discount = (amount*25)/100;
            topaid = amount-discount;
        }

        cout<<endl<<"Amount to be paid:"<<topaid;

        return 0;





    
    }
}