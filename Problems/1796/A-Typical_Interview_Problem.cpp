#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<pi>vi;
 void solve () {
    string fb = "";
    for (int i = 1; i < 100; ++i) {
        if (i % 3 == 0)
            fb += 'F';
        if (i % 5 == 0)
            fb += 'B';
    }
     int n;
    cin >> n;
    string s;
    cin >> s;
    bool bo = false;
    string t = "";
    for (int i = 0; i < 10; ++i) {
        t = "";
        for (int j = i; j < n + i; ++j)
            t += fb[j];
         if (t == s) {
            bo = true;
        }
    }
    cout << (bo ? "YES" : "NO") << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}