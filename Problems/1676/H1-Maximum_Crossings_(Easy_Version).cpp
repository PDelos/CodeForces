#include <bits/stdc++.h>
using namespace std;
   int main(){
 int t;
 cin >> t;
 while(t--){
  int n;
  cin >> n;
  vector<int>v(n);
  unordered_multiset<int> s;
   int cross = 0;
  for(int i = 0 ; i < n; ++i){
   cin >> v[i];
   s.insert(v[i]);
   int x = s.count(v[i]);
   if(x > 1) cross += x-1;
   }
  for (int i = 0; i < n; ++i){
   for(int j=i; j>=0; --j) {
    if(v[j] > v[i]) ++cross;
   }
  }
   cout << cross << endl;
 }
}