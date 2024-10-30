#include<bits/stdc++.h>
#define int long long
using namespace std;
    typedef pair<int, int>pi;
typedef vector<int>vi;
    void solve () {
    int n, s;
    cin >> n >> s;
    vi k = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435, 465, 496};
    vector <int> dp(n + 1), ans(n + 1);
    for (int i = 1; i <= n; ++i) {
        if ((i * (i + 1)) / 2 <= s) {
            ans[i] = 2;
            dp[i] = dp[i - 1] + 2;
        }else {
            if (s <= 0) {
                ans[i] = -1000;
                continue;
            }
                        int ind = -1;
            for (int j = 0; j + 1 < k.size() && ind == -1; ++j) 
                if (k[j] <= s && k[j + 1] > s) 
                    ind = j + 1;
                                ans[i] = - (1 + 2 * (k[ind] - s - 1)); 
            s = 0;
        }
    }
    for (int i = 1; i <= n; ++i)
        cout << ans[i] << " ";
        cout << endl;
}
            signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}