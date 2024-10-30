#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n, b;
    cin >> n >> b;
    vector<int>paguen;
    for (int i = 0; i < n; ++i) {
        int x, y, t, v;
        cin >> x >> y >> t >> v;
        if (x < y and y - x > t and y / b <= t)
            paguen.push_back(v);
    }
     sort(begin(paguen), end(paguen));
     int mx = 0, preu = 0;
    for (int i = 0; i < paguen.size(); ++i) {
        if ((paguen[i]) * (paguen.size() - i) > mx) {
            mx = (paguen[i]) * (paguen.size() - i);
            preu = paguen[i];
        }
    }
    cout << preu << endl;
}