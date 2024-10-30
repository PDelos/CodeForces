#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
  void solve() {
    int x, k, n;
    cin >> n >> k >> x;
    if (x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for (int i = 0; i < n; ++i)
            cout << 1 << " ";
        cout << endl;
        return;
    }
    else if (n % 2 == 0) {
        if (k == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; ++i)
                cout << 2 << " ";
            cout << endl;
        }
    }else{
        if (k <= 2 || n == 1) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            cout << 1 + (n - 3) / 2 << endl;
            for (int i = 0; i < (n - 3) / 2; ++i)
                cout << 2 << " ";
            cout << 3 << endl;
        }
    }
}
  signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}