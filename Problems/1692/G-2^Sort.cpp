#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
 void solve() {
    int n, k;
    cin >> n >> k;
    vi dp (n), v(n);
    for (int &i : v) cin >> i;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] + (v[i] * 2 <= v[i - 1] ? 1 : 0);
     int ans = 0;
    for (int i = 0; i < n - k; ++i) {
        if (dp[i + k] - dp[i] == 0) ans ++;
    }
    cout << ans << endl;    
 }
 signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    }