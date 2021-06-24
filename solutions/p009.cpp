#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long product = -1;
        for(int a = 1; a <= n / 3; a++){
            int b = (n * n - 2 * n * a)/(2 * n - 2 * a), c = n - a - b;
            if(a * a + b * b == c * c)
                if(a * b * c > product) 
                    product = a * b * c;
        }
        cout << product << endl;
    }
    return 0;
}
