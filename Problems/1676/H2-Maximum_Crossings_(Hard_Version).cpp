#include <bits/stdc++.h>
using namespace std;
#define int long long
 int st[(int)(1e6+5)];
vector<int>a;   
  void update (int i, int v, int k, int l, int r) {
    // i: posicio, v: valor
    if (r == l) {
        st[k] += v; //he posat un +=
        return;
    }
    int m = (l+r) / 2;
    if (i <= m) update(i, v, 2*k, l, m);
    else update (i, v, 2*k+1, m+1, r);
    st[k] = st[2*k] + st[2*k+1];
}
 int suma (int k, int l, int r, int ql, int qr) {
    if (ql > r || qr < l) return 0;
    if (l <= ql && r >= qr) return st[k];
    int m = (ql+qr) / 2;
    return suma (k*2, l, r, ql, m) + suma (k*2+1, l, r, m+1, qr);
}
  signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
        int t;
    cin >> t;
    while(t--){
        for(int &i: st) i=0;
         int n;
        cin >> n;
        vector<int>v(n);
        for(int &i: v) cin >> i;
          int ans = 0;
        for(int x : v){
            ans+=suma(1,x,n,1,n);
            update(x,1,1, 1,n);
        }
        cout << ans << endl;
     }
}