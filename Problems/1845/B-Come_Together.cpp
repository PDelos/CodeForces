#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
  void solve() {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    int dbx = abs(xa - xb), dby = abs(ya - yb), dcx = abs(xa - xc), dcy = abs(ya - yc);
    int ans = 0;
    if ((xa <= xc && xa <= xb) or ((xa >= xc && xa >= xb)))
        ans += min(dbx, dcx);
    if ((ya <= yc && ya <= yb) or ((ya >= yc && ya >= yb)))
        ans += min(dby, dcy);
    cout << ans + 1<< endl;
}
  signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}