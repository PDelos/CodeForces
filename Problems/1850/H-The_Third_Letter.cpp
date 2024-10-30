#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>>vpi;
 vector<vpi>g;
vector<bool>used;
vector<int>dist;
bool sol;
 void dfs(int n, int d) {
    used[n] = true;
    dist[n] = d;
    for (auto [u, dv] : g[n]) {
        if (!used[u])
            dfs(u, d + dv);
        else if (d + dv != dist[u])
            sol = false;
    }
}
 void solve() {
    int n, m;
    cin >> n >> m;
    g = vector<vpi>(n);
    for (int i = 0; i < m; ++i) {
        int a, b, d;
        cin >> a >> b >> d;
        a--;
        b--;
        g[a].push_back({b, d});
        g[b].push_back({a, -d});
    }
    sol = true;
    used = vector<bool>(n, false);
    dist = vector<int>(n);
    for (int i = 0; i < n; ++i) {
        if (!used[i]) dfs(i, 0);
    }
    cout << (sol ? "YES" : "NO") << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }