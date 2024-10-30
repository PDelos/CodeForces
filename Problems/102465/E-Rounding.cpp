#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
 int main(){
 ios::sync_with_stdio(false);
    cin.tie(0);
     int p;
    cin >> p;
    vector<pair<string, int>>prob(p);
    for(auto &i : prob) cin >> i.ff >> i.ss;
  double sumMin = 0, sumMax = 0;
  for(auto &i : prob) sumMin += max(0.0, i.ss-0.5);
 for(auto &i : prob) sumMax += min(100.0, i.ss+0.49);
   if(sumMin > 100 or sumMax < 100) {
  cout << "IMPOSSIBLE"<< endl;
  return 0;
 }
  cout << fixed << setprecision(2);
  for(auto i : prob) {
  cout << i.ff << " " 
    << max(max(0.0, i.ss-0.5), min(100.0, i.ss+0.49) - sumMax + 100) << " "
    << min(min(100.0, i.ss+0.49), max(0.0, i.ss-0.5) - sumMin + 100)
    << endl;
 }
 }