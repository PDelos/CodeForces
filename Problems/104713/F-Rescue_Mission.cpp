#include <bits/stdc++.h>
#define int long long
using namespace std;
 using vi = vector<int>;
using vvi = vector<vi>;
using pi = pair<int, int>;
  signed main() {
 int t;
 cin >> t;
 while (t--) {
  int n, x;
  cin >> x >> n;
  int sol = 1;
  for (int a = 1; a * a <= x; ++a) {
   if (x % a == 0) {
    if ((x / a) * n <= x) sol = max(sol, x/a);
    else if (a * n <= x) sol = max(sol, a);
   }
  } 
  cout << sol << endl;
 }
 }