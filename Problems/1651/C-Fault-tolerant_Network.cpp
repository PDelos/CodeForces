#include<bits/stdc++.h>
#define int long long
using namespace std;
    typedef pair<int, int>pi;
typedef vector<int>vi;
 const int N = 1e9 + 10;
    void solve () {
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int &i : a) cin >> i;
    for (int &i : b) cin >> i;
     int al, ar, bl, br, ial, iar, ibl, ibr;
    al = ar = bl = br = N;
     for (int i = 0; i < n; ++i) {
        if (abs(a[0] - b[i]) < al) {
            al = abs(a[0] - b[i]);
        }
        if (abs(a[n - 1] - b[i]) < ar) {
            ar = abs(a[n - 1] - b[i]);
            iar = i;
        }
        if (abs(a[i] - b[n - 1]) < br) {
            br = abs(a[i] - b[n - 1]);
        }
        if (abs(a[i] - b[0]) < bl) {
            bl = abs(a[i] - b[0]);
        }
    }   
     int ans = 1e18 + 3;
        ans = min(ans, abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]));
    ans = min(ans, abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]));
    ans = min(ans, ar + al + br + bl);
    ans = min(ans, abs(a[0] - b[0]) + ar + br);
    ans = min(ans, abs(a[n - 1] - b[n - 1]) + al + bl);
    ans = min(ans, abs(a[0] - b[n - 1]) + ar + bl);
    ans = min(ans, abs(a[n - 1] - b[0]) + al + br);
        cout << ans << endl;
    }
        signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}