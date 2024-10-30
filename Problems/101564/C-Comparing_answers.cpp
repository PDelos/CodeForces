#include<bits/stdc++.h>
#define int long long
using namespace std;
   signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin>>n){
        if(n == 0)break;
        vector<vector<int>>A(n,vector<int>(n)),B(n,vector<int>(n));
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>A[i][j];
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>B[i][j];
            }
        }
        int possible = true;
        srand(1000);
        for(int z=0;z<= 10;++z){
            vector<int>v(n);
            for(int i=0;i<n;++i)v[i] = rand();
            vector<int>w(n),w2(n);
            for(int i=0;i<n;++i){
                int sum1 = 0;
                int sum2 = 0;
                for(int j=0;j<n;++j){
                    sum1 += A[i][j]*v[j];
                    sum2 += B[i][j]*v[j];
                }
                w2[i] = sum2;
                w[i] = sum1;
            }
            for(int i=0;i<n;++i){
                int sum1 = 0;
                for(int j=0;j<n;++j){
                    sum1 += A[i][j]*w[j];
                }
                if(sum1 != w2[i])possible = false;
            }
        }
        if(possible)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}