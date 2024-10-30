#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
  void solve() {
    int p = -1;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            char c;
            cin >> c;
            if (c != '.') cout << c;
        }
    }
    cout << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }