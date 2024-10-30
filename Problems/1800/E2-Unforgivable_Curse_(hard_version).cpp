#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n, k;
    cin >> n >> k;   
    string s, t;
    cin >> s >> t;
    if (s == t) {
        cout << "YES" << endl;
        return;
    }
     if (n <= k && s != t) {
        cout << "NO" << endl;
        return;
    }
     if (n < k * 2 ) {
        for (int i = n - k; i <= k - 1; ++i) 
            if (s[i] != t[i]) {
                cout << "NO" << endl;
                return;
        }
    }
     vector<int>v(26);
    for (char c: s)
        v[c - 'a']++;
    for (char c: t)
        v[c - 'a']--;
        for (int e: v)
        if (e != 0) {
            cout << "NO" << endl;
            return;
        }
     cout << "YES" << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}