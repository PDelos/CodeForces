#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int> vi;
 vi dp (11);
 void crib () {
    int crs = 0;
    dp = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111};
}   
 int canv (int n) {
    int idx = 0, c = 0;
    while (n > 0) {
        c += dp[idx] * (n % 10);
        n /= 10;
        idx ++;
    }
    return c;
}
 void solve() {  
    int l, r;
    cin >> l >> r;
    cout << canv(r) - canv(l) << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    crib();
    int t;
    cin >> t;
    while (t--)
        solve();
}