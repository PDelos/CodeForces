#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<pair<int, int>>vpi;
typedef vector<int>vi;
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
        vector<pair<int, int>>s;    
    vi f;
    f.push_back(6);
        for (int i = 4; i <= 16; ++i) {
        f.push_back(i * f.back());
    }
    s.push_back({0, 0});
     for (int i = 0; i < (1ll << f.size()); ++i) {
        int count = 0, su = 0;
        for (int j = 0; j < f.size(); ++j) {
            if (i & (1ll << j)) {
                count ++;
                su += f[j];
            }
        }
        s.push_back({su, count});
    }
     int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int ans = 1000;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i].first > n) continue;
            ans = min(s[i].second + __builtin_popcountll(n - s[i].first), ans);
        }
        cout << ans << endl;
    }
 }