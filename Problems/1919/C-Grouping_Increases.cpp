#include <bits/stdc++.h>
 using namespace std;
 void solve() {
 int n;
 cin >> n;
 vector<int>v(n);
 for (int &x: v) cin >> x;
 int a = -1, b = -1;
 int ans = 0; 
 for (int x: v) {
  if (a == -1 and b == -1) a = x;
  else if (a < x && b == -1) b = x;
  else if (a >= x && b < x) a = x;
  else if (b >= x && a < x) b = x;
  else if (a >= x && b >= x) {
   if (a < b) a = x;
   else b = x;
  }
  else {
   if (a < b) a = x;
   else b = x;
   ans ++;
  }   
 }
 cout << ans  << endl;
} 
 int main () {
 int tt;
 cin >> tt;
 while (tt--) {
  solve();
 }
}