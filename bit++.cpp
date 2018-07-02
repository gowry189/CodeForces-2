/*The program is to find out the answer of the given set of operations. If its ++ then add 1 to the answer or else subtract 1 from the answer. */

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    string A;
    while(n--)
    {
        cin>>A;
        
        //Checking if the entered string has ++ 
        if(A=="X++"||A=="++X")
        cnt=cnt+1;
        else
        cnt=cnt-1;
    }
    cout<<cnt<<"\n";
    return 0;
}
