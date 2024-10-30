#include <bits/stdc++.h>
#define int long long
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
        if (k == 1) {
            cout << "YES" << endl;
            continue;
        }
        vector<pi>p(k);
        for (int i = 0; i < k; ++i) {
            p[i] = {-dist[v[i]], v[i]};
        }
        sort (p.begin(), p.end());
        int co = -1, sn = -1;
        for (int i = 1; i < k; ++i) {
            co = lca (p[0].second, p[i].second);
            if (co != p[i].second) {
                sn = p[i].second;
                break;
            }
        }
        // cout << co << " " << sn << endl;
        if (sn == -1) {
            cout << "YES" << endl;
        }else {
            set<int>bo;
            for (int &i: v)
                bo.insert(i);
            int b = p[0].second;
            while (b != -1 && b != co) {
                if (bo.find(b) != bo.end()) {
                    bo.erase(b);
                }
                b = par[b];
            }
            b = sn;
            while (b != -1 && b != co) {
                if (bo.find(b) != bo.end()) {
                    bo.erase(b);
                }
                b = par[b];
            }
            if (bo.find(co) != bo.end())
                bo.erase(co);
            cout << (bo.size() == 0 ? "YES" : "NO") << endl;
        }
    }
}
    signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    solve();
}