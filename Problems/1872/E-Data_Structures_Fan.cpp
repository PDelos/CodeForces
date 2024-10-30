#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>>vpi;
typedef vector<int>vi;
 void solve() {
    int n;
    cin >> n; 
    vi v(n);
    for (int &i : v) cin >> i;
    string s; cin >> s;
    vi pref(n);
    pref[0] = v[0]; 
        for (int i = 1; i < n; ++i) {
        pref[i] = pref[i - 1] ^ v[i];
    }
     int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') a ^= v[i];
        else b ^= v[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int tp;
        cin >> tp;
        if (tp == 1) {
            int l, r;
            cin >> l >> r;
            --r;
            --l;
            int val = (l == 0 ? pref[r] : pref[r] ^ pref[l - 1]);
            a ^= val;
            b ^= val;
        }else {
            int x;
            cin >> x;
            cout << (x == 1 ? b : a) << " ";
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