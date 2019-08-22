#include<bits/stdc++.h>
using namespace std;
 int main() {   
    long long n;
    long long cnt=0;
    long long c = 0;
    cin>>n;
    long long  A[n];
    for(long long i = 0; i < n; i++) {
        cin>>A[i];
    }
    for(long long i = 0; i < n ; i++) {
        if(A[i]<0) {
            c++;  
        }
    }
     for(long long i = 0; i < n; i++) {
         if(A[i] <= 0) {
             while(A[i] != 1) {
                A[i] = A[i]+1;
                cnt++;
             }
         } else {
             while(A[i] != 1) {
                 A[i] = A[i]-1;
                 cnt++;
             }
         }
     }
    if(c%2 == 0 && c!= 0) {
        cnt = cnt - 4;
    }
     cout<<cnt;
     return 0;
 }
