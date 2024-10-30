#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
   struct node{
    int gcd;
    int min;
    int t;
    node(){
        gcd = 0;
        min = 1e9+1;
        t = 0;
    }
};
 int pwr, n;
vector<node>st;
vector<int>a;
  node merge(node a, node b){
 node returner;
 returner.gcd = __gcd(a.gcd ,b.gcd);
 if(a.min == b.min) {
  returner.min = a.min;
  returner.t = a.t + b.t;
 }
 else if(a.min < b.min){
  returner.min = a.min;
  returner.t = a.t;
 }
 else{
  returner.min = b.min;
  returner.t = b.t;
 }
 return returner;
}
  void build(){
 for(int i = 0; i < n; ++i){
  st[pwr+i].gcd = a[i];
  st[pwr+i].min = a[i];
  st[pwr+i].t = 1;
 }
 for(int i = pwr-1; i >= 1; --i){
  st[i] = merge(st[i*2], st[i*2+1]);
 }
}
  node query(int k, int l, int r, int ql, int qr) {
    if (ql > r || qr < l) return node();
    if (l <= ql && r >= qr) return st[k];
    int m = (ql+qr) / 2;
    return merge(query (k*2, l, r, ql, m), query (k*2+1, l, r, m+1, qr));
}
 signed main(){
 cin.tie(0);
    ios_base::sync_with_stdio(0);
     cin >> n;
     a = vector<int>(n);
    for(int &i : a) cin >> i;
     pwr = 1;
    while(pwr < n) pwr*=2;
     st = vector<node>(pwr*2);
    build();
     int m;
    cin >> m;
    while(m--){
     int l, r;
     cin >> l >> r;
     node q = query(1, l, r, 1, pwr);
          if(q.gcd == q.min)
      cout <<(r-l+1-q.t) <<endl;
     else
      cout << (r-l+1) << endl;
             }
}