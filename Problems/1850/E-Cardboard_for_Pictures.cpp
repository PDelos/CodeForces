#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
  void solve() {
    int n, c;
    cin >> n >> c;
    vi v(n);
    for (int &i : v) cin >> i;
    int l = 0, r = sqrt(c);
    while (l + 1 < r) {
        int mid = l + (r - l) / 2;
        int su = 0;
        for (int i = 0; i < n; ++i) {
            su += (v[i] + 2 * mid) * (v[i] + 2 * mid);
            if (su > c || su > 1e18) break;
        }
        if (su > c) r = mid;
        else l = mid;
    }
    cout << l << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }