#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
    typedef vector<int> vi;
typedef pair<int, int>pi;
    int n;
vector<vector<int>>g, jump;
vector<int>par, dist, used;
    void dfs (int v, int d, int p) {
    // cerr << "nod: " << v << endl;
    dist[v] = d;
    par[v] = p;
    for (int u: g[v]) {
        if (!used[u]){
            used[u] = true;
            dfs (u, d+1, v);
        }
    }
}
    int move (int n, int D) {
    for (int k = 20; k >= 0; --k) {
        if (D & (1<<k)) 
            n = jump[n][k];
    }
    return n;
}
    int lca (int a, int b) {
    if (dist[a] < dist[b]) {
        swap(a, b);
    }
    a = move (a, dist[a]-dist[b]);
    if (a == b) return a;
    for (int k = 20; k >= 0; --k) {
        int a1 = jump[a][k];
        int b1 = jump[b][k];
        if (a1 != b1) {
            a = a1;
            b = b1;
        }
    }
    return jump[a][0];
}
 int distance (int u, int v) {
    return dist[u] + dist[v] - (2 * dist[lca (u, v)]);
}
    void solve(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    g.resize(n+1);
    jump.resize(n+1, vector<int>(21));
    par.resize(n+1);
    dist.resize(n+1);
    used.resize(n+1, false);
    for (int i = 0; i < n-1; ++i){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    used[1] = true;
    dfs (1, 0, -1);
        for (int i = 2; i <= n; ++i) {
        jump[i][0] = par[i];
    }
        for (int k = 1; k < 21; ++k) {
        for (int v = 2; v <= n; ++v) {
            jump[v][k] = jump[jump[v][k-1]][k-1];
        }
    }
     int q;
    cin >> q;
     while (q--) {
        int k;
        cin >> k;
        vi v(k);
        for (int &i : v) cin >> i;
        if (k <= 2) {
            cout << "YES" << endl;
            continue;
        }
         int u = v[0], n = v[1];
        int len = distance(u, n);
        bool bo = true;
         for (int i = 2; i < k; ++i) {
            int x = distance(u, v[i]), y = distance(n, v[i]);
            len = distance(u, n);
            if (len + x == y) {
                u = v[i];
            }else if (len + y == x) {
                n = v[i];
            }else if (x + y == len) {
                continue;
            }
            else {
                bo = false;
                break;
            }
        }
        cout << (bo ? "YES" : "NO") << endl;
    }
}
    signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}