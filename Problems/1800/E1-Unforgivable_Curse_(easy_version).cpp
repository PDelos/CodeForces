#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 vector<vi>t;
 void solve () {
    int n, k;
    cin >> n >> k;   
    string s, t;
    cin >> s >> t;
    if (n <= 3 && s != t) {
        cout << "NO" << endl;
        return;
    }
    else if (n == 4 && (s[1] != t[1] or s[2] != t[2])) {
        cout << "NO" << endl;
        return;
    }
    else if (n == 5 && s[2] != t[2]) {
        cout << "NO" << endl;
        return;
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