#include<bits/stdc++.h>
using namespace std;
#define int long long
 signed main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a == b) cout << 0 << endl;
        else if (a < b && (b-a)%4 == 0) cout << 3 << endl;
        else cout << (((abs(a-b)%2 && a < b) || (!(abs(a-b)%2) && a > b)) ? 1 : 2) << endl;
    }
}