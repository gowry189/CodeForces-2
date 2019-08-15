#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1;
    int n;
    cin>>n;
    int x = 0;
    int y = 1;
    arr1.push_back(x);
    arr1.push_back(y);
    for(int i = 2; i < n; i++) {
        int z = x+y;
        arr1.push_back(z);
        x = y;
        y = z;
   }
   for(auto it: arr1) {
       cout<< it << "\n";
   }
   return 0;
}
