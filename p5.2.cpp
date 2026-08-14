#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"**************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"Student Registration"<<endl;

    int enrollment_number,semester,mobile_number;
    string branch,name;
    char ch='Y';
        cout<<"------------------------------------"<<endl;
        do
        {
        cout<<"Enrollment Number"<<setw(9)<<":";
        cin>>enrollment_number;
        cout<<"Student Name"<<setw(14)<<":";
        cin>>name;
        cout<<"Branch"<<setw(20)<<":";
        cin>>branch;
        cout<<"Semester"<<setw(18)<<":";
        cin>>semester;
        cout<<"Mobile number"<<setw(13)<<":";
        cin>>mobile_number;
        cout<<"Register another student ?(Y/N)";
        cin>>ch;
        }
        while(ch=='y'||ch=='Y');
        return 0;
}
