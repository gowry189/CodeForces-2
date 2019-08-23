#include <iostream> 
using namespace std; 
long long binaryToDecimal(int n) 
{ 
	long long num = n; 
	long long dec_value = 0; 
	long long base = 1; 
	long long temp = num; 
	while (temp) { 
		long long last_digit = temp % 10; 
		temp = temp / 10; 
		dec_value += last_digit * base; 
		base = base * 2; 
	} 
	return dec_value; 
} 
int main() 
{ 
	long long n;
	long long count = 0;
	cin>>n;
	long long r = binaryToDecimal(n);
	for(long long i = 1; i < n; i = 4*i) {
	    if(r > i) {
	        count++;
	    }
	}
	cout<<count;
    return 0;
} 
