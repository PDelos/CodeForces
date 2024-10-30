#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
  void solve () {
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b == c ? '+' : '-') << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}