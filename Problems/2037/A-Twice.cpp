#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;

void solve() {
    // define variables
    int n;
    cin >> n;
    // not possible
    if(n < 5){
        cout << -1 << endl;
        return;
    }
    
    for(int i=1; i<=n; i+=2){
        if(i == 5) continue;
        cout << i << " ";
    }
    
    cout << "5 4 ";
    
    for(int i=2; i<=n; i+=2){
        if(i == 4) continue;
        cout << i << " ";
    }
    cout << endl;
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
