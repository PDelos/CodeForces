#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int> vi;
 vi dp (13);
 void crib () {
    int crs = 0;
    dp[0] = 0;
    for (int i = 1; i < 13; ++i) {
        dp[i] = (9 * dp[i-1] + pow(10, i - 1));
        crs += dp[i];
    }
}   
 int quat (int n) {
    int q = 0, it = 0, crs = 0;
     while (n > 0) {
        if (n % 10 > 4) {
            q += (n % 10 - 1) * dp[it] + pow(10, it);
        }else if (n % 10 < 4){
            q += (n % 10) * dp[it];
        }else {
            if (it == 0) q++;
            else q += (n % 10 - 1) * dp[it] + crs;
        }
        crs += (n % 10) * pow(10, it);
        it++;
        n /= 10;
    }
    return q;
}
 int pos (int n) {
    int g = -1, idx = 0;
    while (n > 0) {
        g = (n % 10 == 4 ? idx : g);
        idx++;
        n /= 10;
    }
    return g;
}
 int num (int n, int g) {
    int awn = 0, idx = 0;
    while (idx < g) {
        awn += (n % 10) * pow(10, idx);
        ++idx;
        n /= 10; 
    }
    return awn;
}
  void solve() {  
    int l = 0, r = 1e13 , k;
    cin >> k;
    while (l + 1 < r) {
        int mid = l + (r - l) / 2;
        if (pos(mid) == -1) {
            if (mid - quat(mid) < k) l = mid;
            else r = mid; 
        }else {
            int g = mid - num(mid, pos(mid)) + (5 * pow(10, pos(mid)));
            int low = mid - num(mid, pos(mid)) - 1;
            if (low - quat(low) < k) l = mid;
            else r = mid;
        }
    }
    cout << l+1 << endl;
 }
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    crib();
    int t;
    cin >> t;
    while (t--)
        solve();
}