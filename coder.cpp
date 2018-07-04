/*The problem is to find the number of ways a chess coin can be moved so that it can be moved one place to front, to left, to right and to back.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i%2!=0&&j%2==0)||(i%2==0&&j%2!=0))
            {}
            else
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i%2!=0&&j%2==0)||(i%2==0&&j%2!=0))
            cout<<".";
            else
            cout<<"C";
        }
        cout<<"\n";
    }
    retur
