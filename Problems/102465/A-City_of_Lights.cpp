#include <bits/stdc++.h>
#define int long long
using namespace std;
 typedef vector<int> vi;
typedef pair<int, int>pi;
 void solve(){
    int n, k;
    cin >> n >> k;
    vector<bool>v(n + 2);
    int ma = 0;
    while (k > 0) {
        int a;
        cin >> a;
        for (int i = 1; i * a <= n; ++i) {
            if (v[i * a] == true)
                v[i * a] = false;
            else 
                v[i * a] = true;
        }
        int m = 0;
        for (bool b : v)
            m += (b == true ? 1 : 0);
        ma = max (m, ma);
        k--;
    }
    cout << ma << endl;
}
 signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}