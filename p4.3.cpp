#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    short int choice;
    cout<<"****************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGMENT SYSTEM"<<endl;
    cout<<"****************************************************"<<endl;
   M: cout<<"-----------------------Main menu--------------------"<<endl;

    cout<<"Enter Your Choice:";
    cin>>choice;

    switch(choice)
    {
    case 1:
        cout<<"Register New Student";
        cout<<endl;
         cout<<"----------------------------------------------------"<<endl;
        cout<<"STUDENT REGISTRATION"<<endl;
        cout<<"----------------------------------------------------"<<endl;
        cout<<"Enrollment Number"<<setw(9)<<":"<<"26TCEYID"<<endl;
        cout<<"Student Name"<<setw(14)<<":"<<"Jay rana"<<endl;
        cout<<"Branch"<<setw(20)<<":"<<"CE"<<endl;
        cout<<"Semester"<<setw(18)<<":"<<"1st"<<endl;
        cout<<"Mobile number"<<setw(13)<<":"<<"9999999999"<<endl;
       cout<<"Student Registered Successfully..";
       cout<<endl;
        break;
    case 2:
        cout<<"Display Student Record";
        cout<<endl;
        cout<<"Enrollment Number"<<setw(9)<<":"<<"26TCEYID"<<endl;
        cout<<"Student Name"<<setw(14)<<":"<<"Jay rana"<<endl;
        cout<<"Branch"<<setw(20)<<":"<<"CE"<<endl;
        cout<<"Semester"<<setw(18)<<":"<<"1st"<<endl;
        cout<<"Mobile number"<<setw(13)<<":"<<"9999999999"<<endl;
        cout<<endl;
        break;
    case 3:
        cout<<"Enter Student Marks";
        cout<<endl;

        break;
    case 4:
        cout<<"Display Academic Result";
        cout<<endl;
        break;
    default :
        cout<<"Exit";
        cout<<endl;
        goto M;
    }
       goto M;
}


