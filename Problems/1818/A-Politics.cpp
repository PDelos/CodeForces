#include<bits/stdc++.h>
#define int long long
 using namespace std;
 int solve(){
    int n, k; cin >> n >> k;
        vector<string>v(n);
    for(auto &i: v) cin >> i;
        int count = 1;
    for(int i = 1; i < n; ++i){
        if(v[0] == v[i]) count+=1;
    }
    return count;
}
 signed main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}