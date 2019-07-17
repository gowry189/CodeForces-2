#include<bits/stdc++.h>
using namespace std;
int sum(int n) {
    int sum = 0; 
    while (n != 0) { 
       sum = sum + n % 10; 
       n = n/10; 
   } 
   return sum; 
}
 
int main() {
    int n;
    cin>>n;
    if(sum(n)%4 == 0) {
        cout<<n;
    } else {
        while(sum(n)%4) {
            n++;
        }
        cout<<n;
    }
    return 0;
}
