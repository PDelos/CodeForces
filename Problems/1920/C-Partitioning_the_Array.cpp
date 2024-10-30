#include <bits/stdc++.h>
 using namespace std;
 int main () {
 int tt;
 cin >> tt;
 while (tt--) {
  int n;
  cin >> n;
  vector<int>v(n);
  for (int &x: v) cin >> x;
    int coins = 0;
  for (int k = 1; k * k <= n; ++k) {
   if (n % k != 0) continue;
      int gcd = 0, div_a = k, div_b = n / k;
   for (int i = 0; i + div_a < n; ++i) {
    gcd = __gcd(abs(v[i + div_a] - v[i]), gcd);    
   }
   coins += (gcd != 1);
    if (div_a == div_b) continue;
      gcd = 0;
   for (int i = 0; i + div_b < n; ++i) {   
    gcd = __gcd(abs(v[i + div_b] - v[i]), gcd);
   }
   coins += (gcd != 1);
  }
  cout << coins << endl;
 }
}