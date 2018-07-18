#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int z, x = 0, y = 1, sum=1;
    int n ;
    cin>>n;
    for( int i = 2; i <= n; i++)
    {
        z= x+y;
        sum += z;
        x= y;
        y= z;
    }
    cout<<sum;
    return 0;
}
