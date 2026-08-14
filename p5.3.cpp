#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the value of n:";
    cin>>n;
    for(i=0;i<=n;i=i+1)
    {
        for(j=0;j<i;j=j+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
