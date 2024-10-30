#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>>vpi;
typedef vector<int>vi;
 void solve() {
    string s;
    cin >> s;
    int n = s.size() + 1;
    reverse(s.begin(), s.end());
    s.push_back('0');
    vector<int>v(n);
    v[0] = (s[n - 1] == '9' ? '0' : s[n - 1]);
    for (int i = n - 2; i >= 0; --i) {
        if (s[i] != '9') v[i] = i;
        else v[i] = v[i + 1];
    }
     int lo = -1;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] < '5') continue;
        else if (s[i] != '9') {
            s[i]++;
            lo = i;
        }
        else {
            continue;
            // s[v[i]]++;
            // s[i] = s[v[i]];
            // lo = i;
        }
        // cout << s << endl;
    }
    string ans = "";
     for (int i = 0; i < n; ++i) {
        if (i == n-1 && s[i] == '0') continue;
        if (i >= lo) ans.push_back(s[i]);
        else ans.push_back('0');
    }
         reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}