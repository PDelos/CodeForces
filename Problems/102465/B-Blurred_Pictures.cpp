#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define ff first
#define ss second
#define pb push_back
 vector<pii>v;
 bool dins(int i, int j) {
   return (v[i].ff <= j and j <= v[i].ss);
}
 int main() {
 ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n;
 cin >> n;
 v = vector<pii>(n);
 for (pii  &p : v)cin >> p.ff >> p.ss;
 int sol = 1;
 for (int i = 0; i+sol < n; i++) {
  for (int j = v[i].ff; j+sol <= v[i].ss and i+sol < n and j+sol <= v[i+sol].ss; j++) {
   while (i+sol < n and j + sol <= v[i].ss and dins(i+sol, j) and dins(i+sol, j+sol)) 
    sol++;
  }
 }
 cout << sol << endl;
}