#include <bits/stdc++.h>
using namespace std;
#define int long long
  signed main(){
 int n, d;
 cin >> n >> d;
 vector<vector<int>>nums(d);
  vector<int>v(n);
  for(int i = 0; i < n; ++i){
  int x;
  cin >> x;
  nums[i%d].push_back(x);
 }
  for(int i = 0; i < d; ++i)
  sort(begin(nums[i]), end(nums[i]));
  int cnt = -1;
 for(int i = 0; i < n; ++i){
  if(i%d == 0) cnt+=1;
  v[i] = nums[i%d][cnt];
 }
  for(int i = 1; i < n; ++i) {
  if(v[i] < v[i-1]){
   cout << "NO" << endl;
   return 0;
  }
 }
 cout << "YES" << endl;
 }