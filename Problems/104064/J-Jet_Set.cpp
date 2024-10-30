#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
 bool ended = false;
vector<int>lat(360*2+1);
 void navegar(int y, int py){
 int d = abs(y-py);
 if(d == 360-d) {
     ended =true;
  cout << "yes" << endl;
  return;
 }
 else if(d > 360-d){
  if(y<py){
   for(int i = -360; i<=y*2; ++i)lat[i+360]=1;
   for(int i = py*2; i<=360; ++i)lat[i+360]=1;
  }
  else{
   for(int i = -360; i<=py*2; ++i) lat[i+360]=1;
   for(int i = y*2; i <= 360; ++i) lat[i+360]=1;
  }
 }else{
  if(py<y) {
   for(int i = py*2; i <= y*2; ++i) lat[i+360]=1;
  }
  else {
   for(int i = y*2; i <= py*2; ++i) lat[i+360]=1;
  }
 }
}
  signed main(){
 int n;
 cin >> n;
 cout << fixed << setprecision(1);
  int x, y, px, py;
 n--;
 cin >> px >> py;
 int sx, sy;
 sy = py;
 sx = px;
  while(n--){
  cin >> x >> y;
  navegar(y, py);
  if(ended) return 0;
  px = x;
  py = y;
 }
 navegar(sy, py);
   for(int i = 0; i <= 360*2; ++i){
  if(lat[i]==0){
   double sol = (i-360.0)/2;
   cout << "no "<< sol << endl;
   return 0;
  }
 }
 cout << "yes" << endl;
}