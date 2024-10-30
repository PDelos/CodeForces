#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 typedef vector<double>vi;
  void solve() {
    int n;
    double d, h;
    cin >> n >> d >> h;
    vi a (n);
    long double ans = 0;
    for (double &i : a) cin >> i;
     for (int i = 0; i + 1 < n; ++i) {
        ans += (d * h * 1.0l) / 2.0l;
        if (a[i] + h > a[i + 1]) {
            double nh = h - (a[i + 1] - a[i]);
            long double nd = (nh / h) * d * 1.0l;
            ans -= (nd * nh) / 2;
        }
    }
    cout << fixed << setprecision(13) << ans + (d * h) / 2 << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}