#include <bits/stdc++.h>
using namespace std;
#define int long long
  signed main(){
 int n;
 cin >> n;
 vector<int>used(n);
 for(int &num : used) cin >> num;
 cout << (10-n)*(9-n)*10 << endl;
}