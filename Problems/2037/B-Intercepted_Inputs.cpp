#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;

void solve() {
    // define variables
    int k, a;
    cin >> k;
    set<int>s;
    
    for(int i=0; i < k; i++){
        cin >> a;
        s.insert(a);
    }
    
    int nm = k-2;
    
    // original n, m have to divide k-2 since n*m=k-2
    for(int i = 1; i <= nm; i++){
        if( nm%i == 0 && s.count(i) && s.count(nm/i)){
            cout << i << " " << nm/i << endl;
            return;
        }
    }
    
    // this should never happen
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
