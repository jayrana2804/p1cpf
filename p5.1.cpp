#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, marks,total = 0;
    float average,percentage;

    cout<<"**************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"Enter Number of Subject:";
    cin>>n;


    for(int i=1;i<=n;i++)
    {
        cout<<"Enter Marks of Subject"<<i<<":";
        cin>>marks;

        total+=marks;
    }

    average=(float)total/n;
    percentage=(float)total/(n*100)*100;

    cout<<"--------------------------------------"<<endl;
    cout<<"Academic Result" <<endl;
    cout<<"--------------------------------------"<<endl;

    cout<<fixed <<setprecision(2);

    cout<<"Total Marks     :"<<total<<endl;
    cout<<"Average Marks   : "<<average<<endl;
    cout<<"Percentage      : "<<percentage<<"%"<<endl;
    cout<<"Result          : ";

    if(percentage >= 40)
        cout<<"PASS"<<endl;
    else
        cout<<"FAIL"<<endl;

    cout<<"Grade           :";

    if(percentage>=80)
        cout<<"A+"<<endl;
    else if(percentage>=70)
        cout<<"A"<<endl;
    else if(percentage>=60)
        cout<< "B"<<endl;
    else if(percentage>=50)
        cout<<"C"<<endl;
    else if(percentage>=40)
        cout<<"D"<<endl;
    else
        cout<<"F"<<endl;

    cout<<"Performance     :";

    if(percentage>=80)
        cout<<"Excellent"<<endl;
    else if(percentage>=70)
        cout<<"Very Good"<<endl;
    else if (percentage>=60)
        cout<<"Good"<<endl;
    else if(percentage>=50)
        cout<<"Average"<<endl;
    else if(percentage>=40)
        cout<<"Satisfactory"<<endl;
    else
        cout<<"Poor"<<endl;

    cout<<"--------------------------------------"<<endl;

    return 0;
}
