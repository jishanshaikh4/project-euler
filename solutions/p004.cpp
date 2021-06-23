#include <bits/stdc++.h>

using namespace std;

bool palindrome(long long x){
	long long temp, remainder, sum = 0;
	temp = x;
	while(temp > 0){
    	remainder = temp % 10;
    	sum = (sum * 10) + remainder;
    	temp = temp / 10;
	}
	return x == sum;
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		
		long long product, max_product = 100 * 100;
		for(long long primary = 100; primary <= 999; primary++){
			for(long long secondary = 100; secondary <= 999; secondary++){
				product = primary * secondary;
				if(palindrome(product) && product > max_product){
					if(product < n)
						max_product = product;
				}
			}
		}
		cout << max_product << endl;
	}
	return 0;
}
