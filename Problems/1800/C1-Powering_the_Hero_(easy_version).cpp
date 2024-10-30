#include<bits/stdc++.h>
#define endl "\n"
#define int long long
using namespace std;
 typedef pair<int, int>pi;
typedef vector<int>vi;
 void solve () {
    int n;
    cin >> n;
    priority_queue<int>pq;
    int awn = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == 0) {
            if (pq.empty()) continue;
            awn += pq.top(); pq.pop();
        }else {
            pq.push(a);
        }
    }
    cout << awn << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}