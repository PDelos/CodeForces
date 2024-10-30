#include <bits/stdc++.h>
    #define int long long
    using namespace std;
        signed main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n,m;
        cin>>n;
        vector<int>v(n);
        bitset<200001>sdp;
        bitset<200001>ez;
        sdp[0] = 1;
        for(int i=0;i<n;++i){
            cin>>v[i];
            sdp[v[i]] = 1;
        }
         for(int x:v){
            ez |= (sdp<<x);
        }
                cin>>m;
        int counter = 0;
        for(int i=0;i<m;++i){
            int prov;
            cin>>prov;
            if(ez[prov])counter++;
        }
        cout<<counter<<endl;
    }