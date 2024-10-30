#include<bits/stdc++.h>
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n, x;
    cin >> n >> x;
    vi v(n);
    for (int &i: v) cin >> i;
    vi c (5 * 1e5 + 7);
     int ma = 0;
    for (int e: v) {
        c[e] ++;
        ma = max(e, ma);
    }
     for (int i = 1; i <= ma + 5; ++i) {
        c[i] += c[i - 1] / i;
        c[i - 1] %= i;
    }
     bool bo = true;
    for (int i = 1; i <= ma + 5; ++i) {
        if (c[i] == 0) continue;
        cout << (x <= i ? "YES" : "NO") << endl;
        return;
    }
}
      signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    solve();
}