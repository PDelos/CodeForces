#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
   int main(){
 int n;
 cin >> n;
 int x, sol = 0;
 while(n--){
  cin >> x;
  if(x != 1) ++sol;
 } 
 cout << sol << endl;
}