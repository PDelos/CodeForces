#include<bits/stdc++.h>
using namespace std;
 typedef vector<int> vi;
 int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
        int n, q;
    cin >> n >> q;
    vi v(n);
    for (int &i:v) cin >> i;
     vi dp(n);
    int count = 0;
    for (int i = 1; i + 1 < n; ++i) {
        dp[i + 1] = dp[i];
        if (v[i - 1] >= v[i] && v[i] >= v[i + 1]) dp[i + 1] += 1;
    }
     while (q--) {
        int l, r;
        cin >> l >> r;
        if (r - l < 2) {
            cout << r - l + 1 << endl;
        } else {
            l --;
            r --;
            cout << (r - l + 1 - (dp[r] - dp[l + 1])) << endl;
        }
    }
}