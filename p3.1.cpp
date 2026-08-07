#include<iostream>
#include<iomanip>
using namespace std;

     int main()
{
        cout<<"****************************************************"<<endl;
        cout<<"STUDENT RECORD MANAGMENT SYSTEM"<<endl;
        cout<<"****************************************************"<<endl;

float mathematics, physics, cpf;
float total, average, percentage;


cout <<"========= SUBLECT MARKS ===========\n";
cout <<"ENTER YOUR MATHEMATICS MARKS : ";
cin >> mathematics;
cout << mathematics <<endl;


cout <<"ENTER YOUR PHYSICS MARKS : ";
cin >> physics;
cout << physics <<endl;


cout <<"ENTER YOUR Computer Programming Foundation MARKS : ";
cin >> cpf;
//cout << cpf <<endl;
 
// calculate total 
total = mathematics + physics + cpf;
average = total / 3;
percentage = (total / 300) * 100;
 // display report
 cout << "\n";


        cout << "=======================================\n";
 cout << "ACADEMIC INFORMATION     \n";   
cout << "=======================================\n";

cout << left << setw(30) << "MATHEMATICS"
<< ": " << mathematics << endl;

cout << left << setw(30) << "PHYSICS"
<< ": " << physics << endl;

cout << left << setw(30) << " CPF"
<< ": " << cpf << endl;


cout << "===============================================\n";
 cout << "ACADEMIC SUMMARY      \n";   
cout << "================================================\n";

cout << left << setw(30) << " TOTAL MARKS "
<< ": " << total << endl;\

cout << left << setw(30) << " AVERAGE MARKS"
<< ": " << average << endl;

cout << left << setw(30) << " PERCENTAGE"
<< ": " << fixed << setprecision(2) << percentage << "%" << endl;

cout << "=======================================\n";




       if ( >= 90);
       {
         grade = "O";
         remark ="Outstanding";
       }
       
        else if ( percentage>= 80);
        {
          grade = "A+";
         remark = "Excellent";
       }
       
       else if ( percentage >= 70 );
       {
        grade = "A";
        remark = " Very Good ";
       }
       else if ( percentage >= 60);
       {
        grade = "B+";
        remark = "Good";
       }
       else if ( percentage >= 50);
       {
        grade = "B";
        remark = "Satisfactory";
       }
       else if ( percentage >= 40 );
       {
        grade = "C";
        remark = "Needs Improvement";
       }
       else if (40 >= percentage );
       {
        grade = "F";
        remark = "Failed"
       }

       
cout << "=======================================\n";



return 0;



 }