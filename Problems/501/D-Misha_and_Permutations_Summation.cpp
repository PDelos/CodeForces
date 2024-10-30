#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
 int n, pwr;
vector<int>st;
 void update (int x, int v) {
    int p = x + pwr - 1;
    st[p] = v;
    for (int i = p/2; i >= 1; i /= 2) {
        st[i] = st[2 * i] + st[2 * i + 1];
    }
}
 int suma (int k, int l, int r, int ql, int qr) {
    if (ql > r or qr < l) return 0;
    if (l <= ql and r >= qr) return st[k];
    int m = (ql+qr) / 2;
    return suma (k*2, l, r, ql, m) + suma (k*2+1, l, r, m+1, qr);
}
  void get(vector<int>&v){
 for(int &x : v){
  cin >> x;
  update(x+1,1);
  x -= suma(1, 1, x, 1 , pwr); 
 }
}
 signed main(){
 cin.tie(0);
    ios_base::sync_with_stdio(0);
     cin >> n;
    vector<int>p(n);
    vector<int>q(n);
    vector<int>perm(n);
  pwr=1;
 while(pwr<n)pwr*=2;
  st = vector<int>(pwr*2);
 get(p);
 for(int &i : st) i = 0;
 get(q);
  for(int i = 0; i < n; ++i) perm[i] = p[i]+q[i];
 for(int i = n-2; i > 0; --i){
  int f = n-i;
  perm[i-1] += perm[i]/f;
  perm[i] %= f;
 }
 perm[0] %= n;
  for(int &i : st) i = 0;
 for(int &x : perm){
  int l = 0, r= n-1;
  while(l<r){
   int m=(l+r)/2;
   x+suma(1, 1, m+1, 1, pwr) <= m ? r=m : l=m+1;
  }
  x = l;
  update(x+1,1);
  cout << x << " ";
 }
}