#include <bits/stdc++.h>
    using namespace std;
    #define int long long
         signed main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            //sum red > sum blue, count blue > count red
            vector<int>v(n);    
            for(int i=0;i<n;++i){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            int sum_red = v[n-1];
            int sum_blue = v[0] + v[1];
            int count_blue = 2;
            int count_red = 1;
            int i= 2;
            int j = n-2;
            while( i <= j && (sum_red <= sum_blue || count_blue <=count_red)){
                while(i<= j && count_blue <= count_red){
                    count_blue++;
                    sum_blue += v[i];
                    i++;
                }
                while(i <= j && sum_red <= sum_blue){
                    sum_red += v[j];
                    j--;
                    count_red++;
                }
            }
            if(sum_red > sum_blue && count_blue > count_red){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
         }