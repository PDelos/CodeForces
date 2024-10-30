#include <bits/stdc++.h>
using namespace std;
  int main(){
 cin.tie(0);
    ios_base::sync_with_stdio(0);
  int t, n;
 cin >> t;
 string s;
 while(t--){
  cin >> n;
  cin >> s;
  int sol = 0;
  for(int i = 0; i < n; ++i){
   sol = max(sol, s[i]-'0');
  }
  cout << sol-48 << endl;
  }
}