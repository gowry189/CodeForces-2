/*The aim of the program is to find the years taken for an army officer to increment his rank to the next level. */


#include<bits/stdc++.h>
using namespace std;
int main()
{
    
 //Declaring the rank 
 int n;
 cin>>n;
 //Declaring an array to know the years taken to increase the rank from i to i+1
 int d[n];
 
 //Accepting the array members
 for(int i=0;i<n-1;i++)
 {
     cin>>d[i];
 }
 
 //Declaring the position i to the required rank
 int a,b;
 cin>>a>>b;
 int s;
 int sum=0;
 s=b-a;
 
 //If the difference between the ranks to achieved is 1 then a-1 th element is printed.
 if(s==1)
 {
    cout<<d[a-1];
    return 0;
 }
 
 //Else the sum is printed
 else
 for(int i=a-1;i<b-1;i++)
 sum+=d[i];
 cout<<sum;
 return 0;
}
