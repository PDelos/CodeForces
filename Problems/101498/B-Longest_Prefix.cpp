#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
  signed main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        vector<int>v(1000);
        for(auto c:b){
            v[c]++;
        }
        int res = 0;
        for(auto i:a){
            if(v[i])res++;
            else break;
            v[i]--;
        }
        cout<<res<<endl;
     }
}