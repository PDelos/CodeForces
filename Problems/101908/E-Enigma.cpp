#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
   int main(){
 string m, c;
 cin >> m >> c;
  int f = m.size()-c.size()+1;
 int s = c.size();
  int pos = 0;
  for(int i = 0; i < f; ++i){
  bool valid = true;
  for(int j = 0; j < s; ++j){
   if(m[i+j] == c[j]) {
    valid = false;
   }
  }
  if(valid) ++pos;
 }
  cout << pos << endl;
}