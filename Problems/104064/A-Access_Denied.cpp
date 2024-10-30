#include <bits/stdc++.h>
using namespace std;
#define int long long
 char abc [] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
 int llegir() {
    string s, b;
    char c;
    int n;
    cin >> s >> b;
    if (s == "ACCESS" && b == "GRANTED") return -1;
    cin >> c >> n >> s;
    return n;
}
 signed main(){
 int time = 5;
 string s = "";
 while(time == 5){
        s.push_back('a');
  cout << s << endl;
  time = llegir();
 }
  if(time == -1) return 0;
   int old_time = 1e5;
 for(int i = 0; i < s.size(); ++i){
  for(int j = 0; j < 62; ++j){
   s[i] = abc[j];
    old_time = time;
   cout << s << endl;
   time = llegir();
   if(time == -1) return 0;
   if(old_time < time) break;
  }
 }
 }