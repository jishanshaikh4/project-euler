#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        string num;
        cin >> num;
        long max = 0;
        for (int i=0; i<n-k; i++){
            long prod = 1;
            string select = num.substr(i, k);
            for(auto it: select){
                string s(1, it);
                prod *= stoi(s);
            }
            if(prod > max)
                max = prod;
        }
        cout << max << endl;
    }
    return 0;
}
