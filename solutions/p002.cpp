#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        long long int f1 = 1, f2 = 2, f = 0, sum = 0;
        while(f1 < n){
            if(f1 % 2 == 0){
                sum += f1;
            }
            f = f1 + f2;
            f1 = f2;
            f2 = f;
            // cout << f1 << endl;
        }
        cout << sum << endl;
    }   
    return 0;
}
