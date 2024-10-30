#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
 typedef pair<int, int>pi;
typedef vector<pair<int, int>>vi;
  void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int>v(n);
    int canv = 0;
    if (s[0] == s[1]) {
        canv = 1;
        s[1] = '_';
    }
    for (int i = 2; i < n; ++i) {
        if (s[i] == s[i - 1] || s[i] == s[i - 2]) {
            canv ++;
            s[i] = '_';
        }
    }
    cout << canv << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}