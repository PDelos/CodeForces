#include <bits/stdc++.h>
#define int long long
using namespace std;
 int inv = 0;
vector<int>v;
 void merge (int l, int r, int mid) {
 // v[l : mid] is sorted
 // v[mid + 1: r] is sorted
  int i = l, j = mid + 1;
 vector<int>ans;
 while (i <= mid && j <= r) {
  if (v[j] < v[i]) {
   // cout << v[j] << " " << v[i] << " " << mid - i << endl;
   inv += (mid - i + 1);
   ans.push_back(v[j++]);
  }else {
   ans.push_back(v[i++]);
  } 
 }
  while (i <= mid) ans.push_back(v[i++]);
 while (j <= r) ans.push_back(v[j++]);
  for (int i = l; i <= r; ++i) v[i] = ans[i - l];
}
 void inversions (int l, int r) {
 if (l < r) {
  int mid = l + (r - l) / 2;
  inversions (l, mid);
  inversions (mid + 1, r);
  merge (l, r, mid);
 }
}
 void solve() {
 int n;
 cin >> n;
 vector<pair<int, int>>inp(n);
 for (auto &p: inp) cin >> p.first >> p.second;
 sort (inp.begin(), inp.end());
 v = vector<int>(n);
 for (int i = 0; i < n; ++i) v[i] = inp[i].second;
 inv = 0;
 inversions(0, n-1);
 cout << inv << endl;
 // for (int e: v) cout << e << " ";
 // cout << endl;
}
 signed main () {
 int tt;
 cin >> tt;
 while (tt--) {
  solve();
 }
}