#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    char s[55];
    cin >> s;
    int m = 1;
    for(int i = 1;i <= strlen(s); i = i+m) {
        cout << s[i-1];
        m++;
    }
    return 0;
}
