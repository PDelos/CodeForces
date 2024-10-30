#include <bits/stdc++.h>
using namespace std;
#define int long long
 int solve(vector<int>abc){
 sort(begin(abc), end(abc));
 return abc[1];
}
 signed main(){
 cin.tie(0);
    ios_base::sync_with_stdio(0);
  int t;
 cin >> t;
 vector<int>abc(3);
 while(t--){
  cin >> abc[0] >> abc[1] >> abc[2];
  cout << solve(abc) << endl;
  }
}