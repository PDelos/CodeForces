#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int>low(26), up(26);
    for (char c: s) {
        if (c >= 'A' && c <= 'Z') up[c - 'A']++;
        if (c >= 'a' && c <= 'z') low[c - 'a']++;    
    }
    int awn = 0;
    for (int i = 0; i < 26; ++i) {
        if (up[i] == 0 or low[i] == 0)
            continue;
         if (up[i] >= low[i]) {
            awn += low[i];
            up[i] -= low[i];
            low[i] = 0;
        }
        else if (low[i] > up[i]) {
            awn += up[i];
            low[i] -= up[i];
            up[i] = 0;
        }
    }
     for (int i = 0; i < 26 && k > 0; ++i) {
        // cerr << up[i] << " " << low[i] << endl;
        int nu = up[i] + low[i];
        awn += nu / 2;
        k -= nu / 2;
    }
    if (k < 0) awn -= abs(k);
    cout << awn << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}