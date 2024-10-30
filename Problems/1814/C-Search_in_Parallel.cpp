#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>> vi;
 void solve() {  
    int n, a, b;
    cin >> n >> a >> b;
     vi va, vb;
    vi v(n);
     for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
     sort (v.rbegin(), v.rend());
     for (int i = 0; i < n; ++i) {
        int ca = (va.size() == 0 ? a : va[va.size()-1].second + a);
        int cb = (vb.size()== 0 ? b : vb[vb.size()-1].second + b);
         if (ca == cb) {
            if (a < b)
                va.push_back({v[i].second, ca});
            else vb.push_back({v[i].second, cb});
         }
        else if (ca < cb) va.push_back({v[i].second, ca});
        else vb.push_back({v[i].second, cb});
    }
        cout << va.size() <<  " ";
    for (auto p : va)
        cout << p.first << " ";
    cout << endl << vb.size() << " ";
    for (auto p: vb)
        cout << p.first << " ";
    cout << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}