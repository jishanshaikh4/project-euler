#include <bits/stdc++.h>

using namespace std;

int main(){
    long int t;
    cin >> t;
    while(t--){
        long int n, t1, t2;
        cin >> n;
        t1 = n * (n + 1) / 2;
        t2 = n * (n + 1) * (2 * n + 1) / 6;
        cout << t1 * t1 - t2 << "\n";
    }
    return 0;
}
