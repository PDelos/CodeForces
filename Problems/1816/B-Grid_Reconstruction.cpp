#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1)
            cout << 2 * n + 1 - i << " ";
        else
            cout << i << " ";
    }
     cout << endl;
     for (int i = 2; i <= n; ++i) {
        if (i % 2 == 1)
            cout << 2 * n - i << " ";
        else
            cout << i - 1 << " ";
    }
     cout << 2 * n - 1 << endl;
}
 signed main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}