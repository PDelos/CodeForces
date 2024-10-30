#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 void solve () {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c) cout << "First" << endl;
    else if (b <= a && b <= c) cout << "Second" << endl;
    else if (c <= b && c <= a) cout << "Third" << endl;
 }   
 signed main(){
    // cout << 99999 - 11111 << endl;
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}