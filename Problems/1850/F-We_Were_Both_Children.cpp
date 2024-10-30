#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int>vi;
  int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 int _lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  void solve() {
    int n;
    cin >> n;
    vi v(n);
    for (int &i: v) cin >> i;
    vi freq (2 * 1e5 + 10);
    for (int e: v)
        if (e <= 2 * 1e5) freq[e]++;
    vi ans(n + 5);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j * i <= n; ++j) {
            ans[j * i] += freq[i];
        }
    }
    int manx = 0;
    for (int i = 0; i <= n; ++i)
        manx = max(manx, ans[i]);
     cout << manx << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
 }