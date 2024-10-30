#include <bits/stdc++.h>
using namespace std;
 vector<int>city;
int n, b;
 bool check(int people, int box){
 for(int i = 0; i < n; ++i){
  box -= (city[i]+people-1)/people;
  if(box <  0)
   return false;
 }
 return true;
}
  int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);
  while(cin >> n >> b){
  if(n == -1 and b == -1) break;
  city = vector<int>(n);
  int hi = 0;
  for(int i = 0; i<n; ++i) {
   cin >> city[i];
   hi = max(hi, city[i]);
  }
  hi += 1;
   int lo = 1;
     int mid;
          while (hi>lo) {
         mid = (hi + lo) / 2;
         if (check(mid, b) == true) hi = mid;
         else lo = mid+1;
     }
     cout <<  (hi + lo) / 2 << endl;
 }
}