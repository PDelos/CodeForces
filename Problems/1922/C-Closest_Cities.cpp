#include <bits/stdc++.h>
 using namespace std;
 // cities go from 0 to n-1 
 int main () {
 int tt;
 cin >> tt;
 while (tt--) {
  int n;
  cin >> n;
  vector<int>v(n);
  for (int &x : v) cin >> x;
  vector<int>dist_left(n + 2), dist_right(n + 2); // distance from 0 to i or distance from n - 1 to i
    dist_left[1] = dist_right[n-2] = 1;
   for (int i = 2; i < n; ++i) {
   dist_left[i] = dist_left[i - 1];
      if (v[i] - v[i - 1] < v[i - 1] - v[i - 2]) 
    dist_left[i] += 1; 
   else
    dist_left[i] += v[i] - v[i - 1]; 
  }
   for (int i = n - 3; i >= 0; --i) {
   dist_right[i] = dist_right[i + 1];
   if (v[i + 1] - v[i] < v[i + 2] - v[i + 1]) 
    dist_right[i] += 1; 
   else
    dist_right[i] += v[i + 1] - v[i]; 
  }
   int m;
  cin >> m;
   while (m--) {
   int x, y;
   cin >> x >> y;
   --x;
   --y;
   if (x < y) {
    cout << dist_left[y] - dist_left[x] << endl;
   }
   else {
    cout << dist_right[y] - dist_right[x] << endl;
   }
  }
 }
}