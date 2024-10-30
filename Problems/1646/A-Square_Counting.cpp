#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n, s;
    cin >> n >> s;
    int sq = n * n, l = 0;
    if (s < sq) {
        cout << 0 << endl;
        return;
    }
    cout << s / sq << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}