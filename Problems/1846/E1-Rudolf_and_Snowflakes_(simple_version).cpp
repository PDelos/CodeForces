#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 typedef vector<int>vi;
 set <int> ans;
 const int M = 1e6 + 4;
 void crib() {
    for (int k = 2; k < M; ++k) {
        int sum = 0;
        for (int j = 0; sum < M; ++j) {
            sum += pow(k, j);
            if (j >= 2) ans.insert(sum);
        }
    }
}
 void solve() {
    int n;
    cin >> n;
    cout << (ans.find(n) == ans.end() ? "NO" : "YES") << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    crib();
    int t;
    cin >> t;
    while (t--)
        solve();
}