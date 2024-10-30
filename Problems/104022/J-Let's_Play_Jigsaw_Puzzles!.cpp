#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
   signed main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
  int n;
 int start = -1;
 cin >> n;
  vector<vector<int>>v(n*n, vector<int>(4));
  for(int i  = 0; i < n*n; ++i){
  // n, s, w, e
  cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
  if(v[i][0] == -1 and v[i][2] == -1) start = i;
 }
    int x;
  x= start;
  for(int i = 0; i < n; ++i){
  x = start;
  for(int j = 0; j < n; ++j){
   if(j!=n-1)cout << x+1 << ' ';
   else cout << x+1;
   x = v[x][3]-1;
  }
  cout << endl;
  start = v[start][1]-1;
 }
}