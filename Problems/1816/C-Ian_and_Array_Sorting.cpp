#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& i : v)
        cin >> i;
    if (n % 2) {
        cout << "YES" << endl;
        return;
    }
     int add = 0;
    for (int i = 0; i + 2 < n; i += 2) {
        add += v[i] - v[i + 1];
    }
    if (v[n - 2] + add <= v[n - 1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
 signed main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}