#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;    
    cin >> t;
    
    while(t--){
        int n, count = 0;
        bool check = false;
        cin >> n;
        
        while(!check){
            count++;
            for(int i=1; i<=n; i++){
            	check = (count%i == 0) ? true : false;
                if(check == false)
                    break;
            }
        }
        cout << count << endl;
    }
    return 0;
}
