#include <bits/stdc++.h>
#define int long long
using namespace std;
 typedef vector<int> vi;
  void solve() {
 int n;
 cin >> n;
 vi inp(n);
 for (int &x: inp) cin >> x;
 sort (inp.begin(), inp.end());
 vi v;
 v.push_back(inp[0]);
 for (int e: inp) if (v.back() != e) v.push_back(e);
 v.push_back(1e18);
 int l = 0, r = 0, ans = 0, add = 1;
 while (r + 1 < v.size()) {
  if (add + v[r + 1] - v[r] > n) 
   add -= v[++l] - v[l - 1];
  else add += v[r + 1] - v[r++];
  ans = max(ans, r - l + 1);
 }
 cout << ans << endl;
}
 signed main () {
 int tt;
 cin >> tt;
 while (tt--) {
  solve();
 }
}