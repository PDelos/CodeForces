#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
 const int M = 1e9 + 9, N = 1e9 + 7;
 void solve() {
    int n;
    cin >> n;
    map<int, vector<int>> v;
    map<int, int>h, vt, dd, de;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        h[x]++;
        vt[y]++;
        dd[x + y]++;
        de[x - y]++;
    }
    int ans = 0;
    for (auto it: h)
        ans += (it.second * (it.second - 1));
    for (auto it : vt)
        ans += (it.second * (it.second - 1));
    for (auto it : dd)
        ans += (it.second * (it.second - 1));
    for (auto it : de)
        ans += (it.second * (it.second - 1));
     cout << ans  << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }