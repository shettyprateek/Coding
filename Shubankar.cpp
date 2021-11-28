#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r=2;
    int c=n;
    int s=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j<=n*2-i;j++)
        {
            if(i==r && i<=n/2 && j>=c && j<=s)
            {
                cout<<" ";
                c--;
                s++;
            }
            else
                cout<<"*";
            
        }
        if(i==r)
            r++;
        cout<<endl;;
    }
}


