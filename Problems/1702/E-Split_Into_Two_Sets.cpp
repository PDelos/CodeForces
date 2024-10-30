#include <bits/stdc++.h>
#define int long long
using namespace std;
    typedef vector<int> vi;
typedef pair<int, int>pi;
 vector<vi>g;
vi used, dist;
  bool bo = true;
 int dfs (int u) {
    used[u] = true;
    for (int v: g[u]) {
        if (!used[v])
            return dfs (v) + 1;
    }
    return 1;
}
 void solve(){
    int n;
    cin >> n;
    bo = true;
    g = vector<vi>(n);
    vi count(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        if (x == y) bo = false;
        g[x - 1].push_back(y - 1);
        g[y - 1].push_back(x - 1);
        count[x - 1]++;
        count[y - 1]++;
    }
     for (int e: count)
        if (e != 2) bo = false;
     if (!bo) {
        cout << "NO" << endl;
        return;
    }
     used = vi (n, false);
     for (int i = 0; i < n; ++i) {
        if (!used[i]) {
            if (dfs(i) % 2)
                bo = false;
        }
    }
     cout << (bo ? "YES" : "NO") << endl;
}
    signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}