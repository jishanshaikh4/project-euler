// This code will most likely will give TLE on HR Project Euler +
// But actually solves the problem

#include <bits/stdc++.h>

using namespace std;

string solve(int n){
    string s = "abcdefghijklm";
    for(int i=0; i<n-1; i++){
        next_permutation(s.begin(), s.end());
    }
    return s;
}

int main() {
    string s = "abcdefghijklm";
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        cout << solve(t) << endl;
    }
    return 0;
}
