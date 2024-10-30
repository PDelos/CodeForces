#include <bits/stdc++.h>
 using namespace std;
  void solve() {
 int n;
 cin >> n;
 vector<long long>v(n + 1, 0);
 for (int i = 0; i < n; ++i) {
  long long x; 
  cin >> x;
  v[x]++;
 }
 long long current_sum = 0, ans = 0;
 for (int i = 0; i <= n; ++i) {
  ans += ((v[i] * (v[i] - 1)) /  2) * current_sum;
  ans += (v[i] * (v[i] - 1) * (v[i] - 2)) / 6;
  current_sum += v[i];
 }
 cout << ans << endl;
}
 int main () {
 int tt;
 cin >> tt;
 while (tt--) {
  solve();
 }
}