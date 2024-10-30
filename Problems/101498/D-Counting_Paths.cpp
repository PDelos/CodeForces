#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
const int N = 1e5+10;
int fact[N],rfact[N];
int mod = 1e9+7;
int poww(int a,int b){
    a %= mod;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a %mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res%mod;
}
 int coefficient(int n, int k){
    return (1LL*fact[n] * rfact[n-k]%mod) * rfact[k]%mod;
}
 signed main(){
    int t;
    cin>>t;
    fact[0] = fact[1] = 1;
    rfact[0] = rfact[1] = 1;
    for(int i=2; i<=N;++i){
        fact[i] = 1LL * fact[i-1]*i % mod;
        rfact[i] = poww(fact[i],mod-2);
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<(2*coefficient(a-1,b))%mod<<endl;
    }
}