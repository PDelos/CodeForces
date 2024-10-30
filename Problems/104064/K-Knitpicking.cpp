#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 struct mitjo {
    int l, r, a;
    mitjo() {
        l = r = a = 0;
    }
};
 void solve() {
    int n;
    cin >> n;
    map<string, mitjo>mp;
    for (int i = 0; i < n; ++i) {
        string a, j;
        int k;
        cin >> a >> j >> k;
        if (j == "left") mp[a].l += k;
        else if (j == "right") mp[a].r += k;
        else mp[a].a += k;
    }
    bool valid = false;
    int tot = 0;
    for (auto it : mp) {
        int l = it.second.l, r = it.second.r, a = it.second.a;
        if (a >= 2 || (l > 0 && r > 0)) valid = true;
        tot += max({(a > 0 ? 1ll : 0ll), l, r});
    }
    if (!valid) {
        cout << "impossible" << endl;
        return;
    }else cout << tot + 1 << endl;
    }
 signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0); 
    solve();
}