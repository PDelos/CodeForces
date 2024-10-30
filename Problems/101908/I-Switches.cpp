#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
   int main(){
 ios::sync_with_stdio(false);
    cin.tie(0);
  int N, M;
 cin >> N >> M;
  bitset<1000>on;
 vector<bitset<1000>>light(N);
  int l,x;
 cin >> l;
 while(l--){
        cin >> x; 
        --x;
        on[x] = 1;
 }
  for(auto &b : light){
  cin >> l;
  while(l--) {
   cin >> x;
   --x;
   b[x] = 1;
  }
 }
   int i;
 for(i = 0; i < 2*N; ++i){
  on = (on ^ light[i % N]);
        if(on.none()) break;
 }
  if(on.none()) cout << i+1 << endl;
 else cout << -1 << endl;
  }