#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, it = 0;
    cin >> n;
    int l = 1, r = n;
    while (n != 1) {
        if (n % 2 == 0) {
            if (it % 2 == 0) r -= (1 << it);
            else l += (1 << it);
        }
        n = n / 2 + n % 2;
        ++it;
    }
    cout << l << endl;
}