#include <bits/stdc++.h>
#define int long long
using namespace std;
 typedef vector<int> vi;
  void solve() {
 int n;
 cin >> n;
 vi v(n);
 for (int &i: v) cin >> i;
 set<int>s;
 int sum = 0;
 s.insert(0);
 for (int i = 0; i < n; ++i) {
  sum += (i % 2 == 0 ? v[i] : -v[i]);
    if (s.find(sum) != s.end()) {
   cout << "YES" << endl;
   return;
  }
  s.insert(sum);
 }
 cout << "NO" << endl;
}
 signed main () {
 int tt;
 cin >> tt;
 while (tt--) {
  solve();
 }
}