#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
    typedef vector<int>vi;
vi fact;
    void solve() {
    int n;
    cin >> n;
    if (n % 2 or n == 2) {
        cout << -1 << endl;
    }
    else cout << (n + 4) / 6 << " " << n / 4 << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) 
        solve();
}