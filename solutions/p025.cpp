// CPP giving TLE :(
// Similar version in Python3 works perfectly fine

#include <bits/stdc++.h>

using namespace std;

int main(){
  int res[5001];
  for(int i=0; i<5001; i++)
    res[i] = 1;
  int a = 0, b = 1, c = 0, count = 1;
  for(int j=1; j<5001; j++){
    while(c % (int)(pow(10, j-1)) == c){
      c = a + b;
      a = b;
      b = c;
      count++;
    }
    res[j] = count;
  }
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << res[n] << endl;
  }
  return 0;
}
