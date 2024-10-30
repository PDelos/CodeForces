#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int j = 0; j < n; ++j) {
        char c = s[j];
        if (c == '1' or c == '0') continue;
        char a;
        if (j == 0) a = '0';
        else {
            if (s[j - 1] == '1') a = '0';
            else a = '1';
        }
         for (int i = 0; i < n; ++i)
            if (s[i] == c) {
                s[i] = a;
            }
    }
      bool bo = true;
    for (int i = 1; i < n; ++i)
        if ((s[i] != '0' and s[i] != '1') or (s[i] == s[i - 1])) bo = false;
    cout << (bo ? "YES" : "NO") << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}