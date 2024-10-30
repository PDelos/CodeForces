#include<bits/stdc++.h>
#define int long long
using namespace std;
 typedef vector<int>vi;
 const int INF = 1e6;
 void solve() {
    int n;
    cin >> n;
    vi v(n);
    for (int &i: v) cin >> i;
    vi dp (n + 2, INF);
    dp[n-1] = 1;
    dp[n] = dp[n + 1] = 0;
    for (int i = n-2; i >= 0; --i) {
        if (i + v[i] >= n) dp[i] = dp[i + 1] + 1;
        else {
            dp[i] = min(dp[i + v[i] + 1], dp[i + 1] + 1);
        }
    }
    cout << dp[0] << endl;
}
 signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}