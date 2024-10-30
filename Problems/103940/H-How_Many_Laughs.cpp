#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int>v;
int x;
int count(int n){
    int ans =0;
    int bitmsk = (1<<n);
    for(int i=1;i<bitmsk;++i){
        int lc =1;
        for(int j=0;j<n;++j){
            if((i>>j) & 1){
                if(lc > x)continue;
                lc = lcm(lc,v[j]);
                            }
        }
        if(__builtin_popcount(i)%2 == 1){
            ans += x/lc;
        }else{
            ans -= x/lc;
        }
    }
    return ans;
}
 signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n>>x;
    v = vector<int>(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    cout << count(n)<<endl;
}