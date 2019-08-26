#include<bits/stdc++.h>
using namespace std;
int check(long int n) {
    long int i;
    long int l = n;
    int fact = 1;
     while(n > 0) {
        long int digit = n%10;
        if(digit == 4 || digit == 7) {
            n = n /10;
            fact = 1;
        } else {
            fact = 0;
            break;
        }
     }
     if(l%4==0 || l%7 == 0) {
         fact = 1
     }
     return fact;
}
int main() {
    long int n;
    cin>>n;
    int k = check(n);
    if(k== 0) {
        cout<<"NO";
    }
    else
    cout<<"YES";
    return 0;
}
