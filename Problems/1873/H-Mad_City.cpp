#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>>vpi;
typedef vector<int>vi;
 set<int>c;
vector<vi>g;
 void rc (vi & p, int n, int s) {
    // cout << n << " " << s << endl;
    c.insert(n);
    if (n == s) return;
    rc(p, p[n], s);
}
 void cycl (int n, int v, vi & p, vi & used) {
    used[n] = true;
    for (int e: g[n]) {
        if (e == v) continue;
        if (!used[e]) {
            p[e] = n;
            cycl(e, n, p, used);
        }
        else {
            // cout << n << " - " << e << endl;
            if (c.empty()) return rc(p, n, e);
        }
    }
}
 void dfs (int sz, int u, vi & dist) {
    vi used(sz, false);
    dist[u] = 0;
    queue<int>q;
    q.push(u);
    while (!q.empty()) {
        int n = q.front(); q.pop();
        if (used[n]) continue;
        used[n] = true;
        for (int e: g[n]) {
            if (dist[e] == -1) {
                dist[e] = dist[n] + 1;
                q.push(e);
            }  
        }
    }
}
 void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    g = vector<vi>(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vi p(n, -1), used(n, false);
    c.clear();
    cycl(0, -1, p, used);
     vi dista(n, -1), distb(n, -1);
    dfs (n, b-1, distb);
    dfs (n, a-1, dista);
    int mdc = 10000000, nd = -1;
     for (int e: c) {
        // cout << e << " ";
        if (distb[e] < mdc) {
            nd = e;
            mdc = distb[e];
        }
    }
    // cout << endl;
    // cout << nd << " " << mdc << " " << dista[nd] << endl;
    cout << (mdc < dista[nd] ? "YES" : "NO") << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}