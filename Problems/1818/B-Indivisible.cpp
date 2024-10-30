#include<bits/stdc++.h>
#define int long long
 using namespace std;
 void solve(){
    int n; cin >> n;
    if(n==1) {
        cout << 1 << endl;
        return;
    }
    if(n%2==1) cout << -1 << endl;
    else{
        for(int i = n; i > 0; i-=2){
            cout << i-1 << " " << i << " ";
        }
        cout << endl;
    }
}
 signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}