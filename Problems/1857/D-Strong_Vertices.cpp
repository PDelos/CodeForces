#include<bits/stdc++.h>
#define int long long
using namespace std;
 typedef vector<int>vi;
 const int INF = 1e6;
 void solve() {
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int &x: a) cin >> x;
    for (int &x: b) cin >> x;
    vi sol(n);
    int mx = -1e10;
    for (int i = 0; i < n; ++i) {
        sol[i] = a[i] - b[i];
        mx = max(mx, sol[i]);
    }
    int c = 0;
    for (int e: sol) c += (e == mx ? 1 : 0);
    cout << c << endl;
    for (int i = 0; i < n; ++i)
        if (sol[i] == mx)
            cout << i+1 << " ";
    cout << endl;
}
 signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}