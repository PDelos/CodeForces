#include<bits/stdc++.h>
#define int long long
using namespace std;
  signed main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    bool rever = false;
    for(int i=0;i<k;++i){
        if(s[i] != s[n-i-1])rever ^= 1;
    }
    if(rever)reverse(s.begin(),s.end());
    for(int i=k;i<n-k;++i){
        cout<<s[i];
    }
    cout<<endl;
}