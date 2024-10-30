#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 int diff = 0;
 vector<int> getnum(int n, int sum){
    int curr = 0;
    vector<int>v(n,0);
    for(int i=0;i<n;++i){
        if(curr< sum){
            v[i] = min(9LL, sum - curr);
            curr += min(9LL, sum -curr);
        }else{
            break;
        }
    }
    diff = sum - curr;
    return v;
}
  signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int s;
        cin>>n>>s;
        diff= 0;
        if(n*9 < s || (s == 1 and n!=1 ))cout<<-1<<endl;
        else{
            if(n % 2 == 1){
                auto v = getnum(n/2, s/2);
                diff = diff*2+ s%2;
                for(auto i:v)cout<<i;
                reverse(v.begin(),v.end());
                cout<<diff;
                for(auto i:v)cout<<i;
                cout<<endl;
            }else{
                if(s%2==1){
                    cout<<-1<<endl;
                }else{
                    auto v = getnum(n/2,s/2);
                    for(auto i:v)cout<<i;
                    reverse(v.begin(),v.end());
                    for(auto i:v)cout<<i;
                    cout<<endl;
                }
            }
        }
    }
}