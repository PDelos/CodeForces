#include<bits/stdc++.h>
#define int long long
using namespace std;
 typedef vector<int>vi;
 const int INF = 1e6;
 vector<vi>g;
vi dist, used;
 void dfs(int n) {
    used[n] = true;
    for (int v: g[n]) {
        if (!used[v]) {
            dist[v] = dist[n] + 1;
            dfs(v);
        }
    }
}
 void solve() {
    int n, k;
    cin >> n >> k;
    g = vector<vi>(n);
    vector<int>marked(k);
    for (int &i: marked) cin >> i;
     for (int i = 0; i < n-1; ++i) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dist = vector<int>(n, -1);
    used = vector<int>(n, false);
    if (k == 1) {
        cout << 0 << endl;
        return;
    }
     dist[marked[0]-1] = 0;
    dfs(marked[0]-1);
     int mx = -1, fn = -1;
    for (int e: marked) {
        if (dist[e-1] > mx) {
            fn = e-1;
            mx = dist[e-1];
        }
    }
    // cout << in << " " << fn << endl;
    dist = vector<int>(n, -1);
    dist[fn] = 0;
    used = vector<int>(n, false);
    dfs(fn);
        for (int e: marked)
        mx = max(mx, dist[e-1]);
     cout << (mx + 1) / 2 << endl;
}
 signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}