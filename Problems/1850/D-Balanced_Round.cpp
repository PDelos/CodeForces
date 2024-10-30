#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
  void solve() {
    int n, k;
    cin >> n >> k;
    vi v (n);
    for (int &i : v) cin >> i;
    sort (v.begin(), v.end());
    int cr = 1, mcr = 1;
    for (int i = 0; i + 1 < n; ++i) {
        if (v[i + 1] - v[i] <= k) {
            cr ++;
        }else {
            mcr = max (mcr, cr);
            cr = 1;
        }
    }
    mcr = max(cr, mcr);
    cout << n - mcr << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }