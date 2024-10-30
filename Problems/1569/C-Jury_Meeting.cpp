#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int> vi;
 vector<int>fact(2e5 + 10);
const int M = 998244353;
  int bin (int a, int p) {
    int res = 1 % M;
    while (p != 0) {
        if (p % 2 == 1) {
            res *= a;
            res %= M;
            p--;
        }else {
            a *= a;
            a %= M;
            p /= 2;
        }
    }
    return res;
}
 int inv(int x){
    x %= M;
    return bin(x, M - 2);
}
 int c(int n, int k){
    if(min(n, k) < 0 || n < k) return 0;
    return (fact[n] * inv(fact[n - k] * fact[k])) % M;
}
 void solve() {
    int n;
    cin >> n;
    vi v (n);
    for (int &i : v) cin >> i;    
     sort (v.rbegin(), v.rend());
     int cm = 0, csm = 0, m = v[0];
    for (int e: v) {
        if (e == m) cm ++;
        else if (e + 1 == m) csm++;
    }
     if (csm == 0) {
        if (cm >= 2) 
            cout << fact[n] << endl;
        else 
            cout << 0 << endl;
        return;
    }
     if (cm >= 2) {
        cout << fact[n] << endl;
        return;
    }
     int ans = (csm * fact[n - 1]) % M;
        for (int i = csm; i + 1 < n; ++i) {
        ans += (fact[n - 1] - (((c(i, csm) * fact[csm]) % M) * fact[n - 1 - csm]) % M) % M;
        ans %= M;
        if (ans < 0) ans += M;
    }
        cout << (ans * cm) % M << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= 2e5 + 4; ++i) 
        fact[i] = (fact[i-1] * i) % M;  
    int t;
    cin >> t;
    while (t--)
        solve();
}