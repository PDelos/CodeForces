#include <bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef vector<int> vi;
 void solve() {
  int n;
  cin >> n;
  if (n == 2) {
    int x;
    cin >> x;
    cout << x << " " << x << endl;
    return;
  }
  vi v ((n * (n - 1)) / 2);
  for (int &i : v) cin >> i;
  map<int, int>m;
  for (int e: v) m[e]++;
  vector<pair<int, int>>vec;
  for (auto [p, e]: m) vec.push_back({p, e});
   if (vec.size() == 1) {
    for (int i = 0; i < n; ++i)
      cout << vec[0].first << " ";
    cout << endl;
    return;
  }
    vi ans;
  int count = 0;
  for (int i = 0; i < vec.size(); ++i) {
    int f = vec[i].second;
    for (int j = n - count - 1; j >= 0 && f > 0; --j) {
      ans.push_back(vec[i].first);
      count ++;
      f -= j;
    }
  }
    for (int e: ans)
    cout << e << " ";
  for (int i = ans.size(); i < n; ++i)
    cout << 1000000000 << " ";
  cout << endl;
}
 signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
}