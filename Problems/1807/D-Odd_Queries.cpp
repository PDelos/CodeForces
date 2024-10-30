#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n, q;
    cin >> n >> q;
    vi v(n);
    for (int &i : v) cin >> i;
    vi dp(n + 1);
    int st = 0;
    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1] + v[i - 1];
        st += v[i - 1];
    }
     while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        if ((st - dp[r] + dp[l - 1] + (r - l + 1) * k) % 2 == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}