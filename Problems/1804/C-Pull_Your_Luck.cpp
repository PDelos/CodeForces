#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int> vi;
 set<int>quad;
 void solve() {
    int n, x, p;
    cin >> n >> x >> p;
    p = p * (p + 1) / 2;
    int m = n - x, a = 0;
    bool bo = false;
    // cout << a * n + m << endl;
    while (bo == false && a * n + m <= p && a <= min(2*n, p)) {
        // cout << a * n + m << endl;
        int y = a * n + m;
        int sx = (-1 + sqrtl(1 + 8*y)) / 2;
        // cout << y << " " << sx << endl;
        if (sx*sx + sx - 2*y == 0) bo = true;
        ++a;
    } 
    cout << (bo ? "Yes" : "No") << endl;
}
 signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
        int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}