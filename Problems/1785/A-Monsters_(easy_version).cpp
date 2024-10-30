#include <bits/stdc++.h>
using namespace std;
#define int long long
 signed main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL); cout.tie(NULL);
  int t;
 cin >> t;
 while(t--){
  int n; cin >> n;
  vector<int>a(n);
  for(int &i: a) cin >> i;
  sort(begin(a), end(a));
  int sol = 0, c=1;
  for(int &i: a){
   if(i>=c) sol += i-c, c++;
  }
  cout << sol << endl;
 }
 }