#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s=1;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=s;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        s+=2;
    }
    s=n*2-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=s;j>=1;j--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        s-=2;
    }
}


