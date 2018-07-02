/*The program is to find if adjacent stones in the given string are same stone. If yes then its counted and we will be able to know how many stones should be removed so that the string is distinct .*/ 

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    int cnt=0;
    cin>>n;
    char A[n];
    cin>>A;
    for(int i=0;i<n;i++)
    {
       if(A[i]==A[i+1])
       cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}
