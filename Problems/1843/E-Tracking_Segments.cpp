#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
 vector<pair<int, int>>seg;
vi t;
 void update (int v, int tl, int tr, int pos) {
    if (tl == tr)
        t[v] = 1;
    else {
        int mid = (tl + tr) / 2;
        if (pos <= mid)
            update(v * 2, tl, mid, pos);
        else
            update(v * 2 + 1, mid + 1, tr, pos);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}
 int query (int v, int tl, int tr, int ql, int qr) {
    if (tr < ql || tl > qr) return 0;
    if (tr <= qr && tl >= ql) return t[v];
    int tm = (tl + tr) / 2;
    return query (2 * v, tl, tm, ql, qr) + query (2 * v + 1, tm + 1, tr, ql, qr);
}
 void solve() {
    int n, m, qu;
    cin >> n >> m;
    seg = vector<pair<int, int>>(m);
    t = vector<int>(4 * n);
    for (auto &p: seg)
        cin >> p.first >> p.second;
    cin >> qu;
    vector<int>q(qu);
    for (int &i : q) cin >> i;
     int l = 0, r = qu + 1;
    bool val = false;
    while (l + 1 < r) {
        t = vector<int>(4 * n);
        int mid = (l + r) / 2;
        for (int i = 0; i < mid; ++i) {
            update(1, 0, n - 1, q[i]-1);
        }
        bool valid = false;
        for (int i = 0; i < m; ++i) {
            int ql = seg[i].first - 1, qr = seg[i].second - 1;
            // cout << mid << ": " << ql << " " << qr << " " << query (1, 0, n-1, ql, qr) << endl;
            if ((qr - ql + 1) - query (1, 0, n-1, ql, qr) < query (1, 0, n-1, ql, qr)) {
                // cout << ql << " " << qr << "!" << endl;
                valid = true;
                val = true;
                break;
            }
        }
        if (valid) r = mid;
        else l = mid;
    }
    cout << (!val ? -1 : l + 1) << endl;
    // cout << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }