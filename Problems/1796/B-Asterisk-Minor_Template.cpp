#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<pi>vi;
 void solve () {
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "YES" << endl << a << endl;
        return;
    }
    if (a[0] == b[0]) {
        cout << "YES" << endl;
        cout << a[0] << '*' << endl;
        return;
    }
    if (a[a.size() - 1] == b[b.size() - 1]) {
        cout << "YES" << endl;
        cout << '*' << a[a.size() - 1] << endl;
        return;
    }
     int n = a.size(), m = b.size();
     for (int i = 0; i + 1 < n; ++i) {
        for (int j = 0; j + 1 < m; ++j) {
            if (a[i] == b[j] && a[i + 1] == b[j + 1]) {
                cout << "YES" << endl;
                cout << '*' << a[i] << a[i + 1] << "*" << endl;
                return;
            }
        }
    }
     cout << "NO" << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}