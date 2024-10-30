#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 void solve () {
    int n;
    cin >> n;
    vector<vector<string>>v(88890);
    for (int i = 0; i < n; ++i) {
        int f;
        string s;
        cin >> s >> f;
        v[f - 11111].push_back(s);
    }
     int mx = 0, f;
    for (int i = 0; i < 88890; ++i)
        if (v[i].size() > mx) {
            mx = v[i].size();
            f = i + 11111;
        }
    cout << f << endl;
}
 signed main(){
    // cout << 99999 - 11111 << endl;
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}