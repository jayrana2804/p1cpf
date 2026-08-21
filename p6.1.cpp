#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int n,i;

    cout<<"****************************************************"<<endl;
    cout<<"SPORTS EVENT SCORE ANALYSIS"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"Enter Number of Participants:";
    cin>>n;
    //one dimensional array
    string participantID[19];
    string participantName[20];
    int score[100];
    //input details
    for(i=0;i<n;i++)
   {
       cout<<"Enter participantID:";
       cin>>participantID[i];

       cout<<"Enter participantName:";
       cin>>participantName[i];

       cout<<"Enter score:";
       cin>>score[i];
   }
    //display participant performance
    cout<<"*************************************"<<endl;
    cout<<"Participant Performance"<<endl;
    cout<<"*************************************"<<endl;

  cout<<"-------------------------------------"<<endl;
    cout<<left<<setw(10)<<"ID"<<setw(15)<<"Name"<<"score"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<left<<setw(10)<<participantID[i]<<setw(15)<<participantName[i]<<score[i]<<endl;
    }
    cout <<"------------------------------------"<< endl;

      //calculate total,highest,lowest.
      int tot=0;
      int highest=score[0];
      int lowest=score[0];
      for(i=0;i<=n;i++)
      {
          tot=tot+score[0];
          if(score[i]>highest)
          {
            highest=score[i];
          }
          if(score[i]<lowest)
          {
            lowest=score[i];
          }
      }
    float average = (float)tot/n;

      //result
      cout<<"Total score:"<<tot<<endl;
      cout<<"average score:"<<average<<endl;
      cout<<"Highest score:"<<highest<<endl;
      cout<<"Lowest score:"<<lowest<<endl;
      cout <<"------------------------------------"<< endl;

  return 0;

}
