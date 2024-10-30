#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>>vpi;
typedef vector<int>vi;
 void solve() {
    int n;
    cin >> n;
    int p = 0, s = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x % 2 == 0) p++;
        else s++;
    }
    int so = s / 2, r = s % 2;
    p += so;
    s = r;
    cout << (s == 1 ? "NO" : "YES") << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}