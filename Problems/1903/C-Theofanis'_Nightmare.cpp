#include <bits/stdc++.h>
#define int long long
using namespace std;
 void solve() {
 int n;
 cin >> n;
 vector<int>v(n);
 for (int &x: v) cin >> x;
 vector<int>pref(n);
 pref[0] = v[0];
 for (int i = 1; i < n; ++i) pref[i] = pref[i - 1] + v[i];
  int ans = pref[n-1], seg = 1;
 for (int i = 1; i < n; ++i) {
  int s = pref[n - 1] - pref[i - 1];
  if (ans + s > ans) {
   ans += s;
   seg++;
  } 
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