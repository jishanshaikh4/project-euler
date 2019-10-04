#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long int n;
        long double p, sum = 0;
        cin >> n;
        p = (n-1) / 3;
        sum = ((3*p*(p+1))/2);
        p = (n-1) / 5;
        sum = sum + ((5 * p * (p+1)) / 2);
        p = (n-1) / 15;   
        sum = sum - ((15 * p * (p+1)) / 2);
        printf("%.0llf\n", sum);
    }
    return 0;
}
