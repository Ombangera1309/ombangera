#include<iostream>
using namespace std;

int main()
{
    float totalClasses, classsesAttended, percentage;

    cout<<endl<<"Enter total classes held:";
    cin>>totalClasses;

    cout<<endl<<"Enter classes attended:";
    cin>>classsesAttended;

    if(classsesAttended<= totalClasses)
    {
        percentage = (classsesAttended /totalClasses)*100;

        cout<<endl<<fixed<<percentage<<"%"<<"of class attended";

        if((percentage<75) && (percentage >= 0))
        {
            cout<<endl<<"Student is not allowed to appear in the exmination.";

        }
        else
        {
            cout<<endl<<"Student is allowed to appear in the examination.";
        }

        return 0;
    }
}