#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
 void solve() {
    int nx, ny;
    double w;
    while (cin >> nx >> ny >> w) {
        if (nx == 0 && ny == 0 && w == 0) break;
        vector<double>x(nx), y(ny);
        for (double &i: x) cin >> i;
        for (double &i: y) cin >> i;
        sort (x.begin(), x.end());
        sort (y.begin(), y.end());
        bool valid = true;
        if (x[0] - w/2 > 0) valid = false;
        for (int i = 1; i < nx; ++i) {
            if (x[i] - w / 2 > x[i - 1] + w / 2) valid = false;
        }
        if (y[0] - w/2 > 0) valid = false;
        for (int i = 1; i < ny; ++i) {
            if (y[i] - w/2 > y[i - 1] + w / 2) valid = false;
        }
        if (x[nx - 1] + w/2 < 75) valid = false;
        if (y[ny - 1] + w/2 < 100) valid = false;
        cout << (valid ? "YES" : "NO") << endl;
    }
}
 signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    solve();
}