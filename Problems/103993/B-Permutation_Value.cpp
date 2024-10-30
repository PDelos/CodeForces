#include <bits/stdc++.h>
using namespace std;
#define int long long
    signed main(){
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  cout << "1 " << n; 
  for(int i = 2; i < n; ++i) cout << " " << i;
  cout << endl;
 }
}