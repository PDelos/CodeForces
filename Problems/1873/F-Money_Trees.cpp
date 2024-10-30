#include <bits/stdc++.h>
#define int long long
using namespace std;
 void solve() {
 int n, k;
 cin >> n >> k;
 vector<int>a(n), h(n);
 for (int &x: a) cin >> x;
 for (int &x: h) cin >> x;
 h.push_back(1e18);
 a.push_back(1e18);
 int l = 0, sum = 0, ans = 0, prev = 0;
  for (int r = 0; r < n; ++r) {
  if (prev % h[r] == 0) {
   sum += a[r];
   while (sum > k) {
    sum -= a[l++];
   }
   ans = max(ans, r - l + 1);   
  }
  else {
   l = r;
   sum = a[l];
   while (sum > k)
    sum -= a[l++];
   ans = max(ans, r - l + 1);
  } 
  prev = h[r];
  // cout << l << " " << r << endl;
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