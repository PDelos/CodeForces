#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>>vpi;
typedef vector<int>vi;
 bool valid (vi & v, int d) {
    // cout << d << endl;
    int cx = v[0] + d, c = 0, n = v.size();
    for (int i = 1; i < n; ++i) {
        if (abs(v[i] - cx) > d) {
            c++;
            cx = v[i] + d;
            // cout << v[i] << " ";
        }
    }
    return (c > 2 ? false : true);
}
 void solve() {
    int n;
    cin >> n;
    vi v(n);
    for (int &i: v) cin >> i;
    sort (v.begin(), v.end());
    int l = -1, r = 1e9;
    while (l + 1 < r) {
        int mid = (r + l) / 2;
        if (valid(v, mid)) r = mid;
        else l = mid;
    }
    cout << l + 1 << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }