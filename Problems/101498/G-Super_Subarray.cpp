#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int lc = 1;
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        vector<int>pref(n+10);
        pref[0] = v[0];
        for(int i=1;i<n;++i){
            pref[i] = pref[i-1] + v[i];
        }
        int cnt =0;
        for(int i=0;i<n;++i){
            int lcmm = 1;
            for(int j=i;j<n;++j){
                int sum = pref[j] - (i == 0?0:pref[i-1]);
                if(lcmm >= 1e12)break;
                lcmm = lcm(lcmm,v[j]);
                if(sum%lcmm == 0){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}