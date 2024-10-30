#include <iostream>
using namespace std;
 int main(){
 int t;
 cin >> t;
 while(t--){
  string name;
  cin >> name;
  int n = name.size();
   cout << name[0];
  if(name[0] != name[1])
   cout << name[0];
  for(int i = 1; i < n-1; ++i){
   cout << name[i];
   if(name[i] != name[i-1] and name[i] != name[i+1])
    cout << name[i];
  }
   if(0 != n-1){
   cout << name[n-1];
   if(name[n-1] != name[n-2])
    cout << name[n-1];
  }
  cout << endl;
 }
}