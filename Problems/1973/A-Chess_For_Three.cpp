#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'
const int maxN = 1e6;
const int INF = 1e18;
const int MOD = 1e9+7;
   signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int total = p1 + p2 + p3;
        if( total % 2 != 0) cout << -1 << endl;
        else {
            if(p1+p2 <= p3) cout << p1+p2 << endl;
            else cout << total/2 << endl;
        }
    }
}