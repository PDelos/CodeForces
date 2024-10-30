#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
  void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b >= 10) cout << "YES" << endl;
    else if (a + c >= 10) cout << "YES" << endl;
    else if (c + b >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }