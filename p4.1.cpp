#include<iostream>
using namespace std;
int main()
{
    int total_marks;
    float average_marks,percentage;
    cout<<"****************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGMENT SYSTEM"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Academic summary"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Total marks:";
    cin>>total_marks;
    cout<<"Average marks:";
    cin>>average_marks;
    cout<<"Percentage:";
    cin>>percentage;
    cout<<"****************************************************"<<endl;
    cout<<"Academic result"<<endl;
    cout<<"****************************************************"<<endl;
    if(percentage<=40)
    {
        cout<<"Result        :fail";
        cout<<endl;
        cout<<"better luck next time";
    }
    else
    {
        cout<<"Result      :pass";
        cout<<endl;
        cout<<"Congratulation! You have successfully passed";
        cout<<endl;
        cout<<"-------------------------------------------------";


    }
}
