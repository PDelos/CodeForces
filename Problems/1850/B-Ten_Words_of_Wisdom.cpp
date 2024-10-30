#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
  void solve() {
    int n;
    cin >> n;
    int mx = 0, ans = -1;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        if (a <= 10 && b > mx) {
            ans = i;
            mx = b;
        }
    }
    cout << ans + 1 << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }