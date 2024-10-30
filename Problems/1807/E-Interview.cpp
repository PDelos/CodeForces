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
    int l = 0, r = n;
    while (l + 1 < r) {
        cout << "?";
        int st = 0, mid = r - (r - l) / 2;
        cout << " " << mid - l;
        for (int i = l; i < mid; ++i) {
            st += v[i];
            cout << " " << i + 1;
        }
        cout << endl;
        fflush(stdout);
         int x;
        cin >> x;
        if (x == st) {
            l = mid;
        }else r = mid;
    }
    cout << "! " << l + 1 << endl;
}
     signed main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
}