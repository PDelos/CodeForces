#include <bits/stdc++.h>
#define endl "\n"
#define int long long 
using namespace std;
 void solve () {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int & i: v) cin >> i;
    sort (v.begin(), v.end());
    int sum = 0;
    for (int el: v) sum += el;
    int mc = 0, p = n-1, i = n-1;
    while (i >= 0) {
        while (v[p] > sum / (i + 1) && p >= 0) --p;
        // cerr << i << " " << p << endl;
        mc = max (mc, (i-p));
        sum -= v[i];
        --i;
    }
    cout << mc << endl;
}
 signed main () {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    solve();
}