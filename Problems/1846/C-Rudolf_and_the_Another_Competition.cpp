#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 typedef vector<int>vi;
 vector<vector<char>> t;
  void solve() {
    int n, m, h;
    cin >> n >> m >> h;
    vector<pair<pair<int, int>, int>>ans(n);
    for (int i = 0; i < n; ++i) {
        vi t (m);
        for (int &e: t) cin >> e;
        sort (t.begin(), t.end());
        int ps = 0, ct = 0, p = 0;
        while (ct + t[ps] <= h && ps < m) {
            ct += t[ps];
            p += ct;
            ps ++;
        }
        ans[i] = {{-ps, p}, i};
    }
    sort (ans.begin(), ans.end());
    for (int i = 0; i < n; ++i) {
        // cout << ans[i].first.first << " " << ans[i].first.second << " " << ans[i].second << endl;        
        if (ans[i].second == 0) cout << i + 1 << endl;
    }
    // cout << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}