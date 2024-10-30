#include<bits/stdc++.h>
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n;
    cin >> n;
    vi v(n);
    for (int &i : v) cin >> i;
    sort (v.begin(), v.end());
     if (v[0] != 1) {
        cout << "NO" << endl;
        return;
    }
    else if (n >= 2 && v[1] != 1) {
        cout << "NO" << endl;
        return;
    }
     bool bo = true;
    int j = 0;
    while (j < n && v[j] == 1)
        ++j;
        int su = j;
     for (int i = j; i  < n; ++i) {
        if (v[i] <= su) {
            su += v[i];
            continue;
        } 
        bo = false;
    }
     cout << (bo ? "YES" : "NO") << endl;
}
     signed main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}