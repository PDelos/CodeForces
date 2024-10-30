#include<bits/stdc++.h>
using namespace std;
#define int long long
 signed main() {
    int n,m,x;
    cin>>n>>m>>x;
    vector<int>v(n);
    vector<int>w(m);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    for(int i=0;i<m;++i){
        cin>>w[i];
    }
    int cnt =0;
    for(int i=0;i<n;++i){
        if(v[i]>=x){
            cnt++;
        }
     }
    for(int i=0;i<m;++i){
        if(w[i]<=x)cnt++;
    }
    cout<<cnt<<endl;
}