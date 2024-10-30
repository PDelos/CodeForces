#include <bits/stdc++.h>
using namespace std;
#define int long long
  signed main(){
 int n, a, b, d;
 cin >> n >> a >> b >> d;
  cout << (a*d <= b ? n*a : n/d * b + min(a*(n%d), b+a*(d-(n%d))) )<< endl;
}