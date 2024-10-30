#include <bits/stdc++.h>
    #define int long long
    using namespace std;
    vector<vector<pair<int,int>>>adj2;
    vector<bool>visited2;
    int counter = 0;
    void dfs(int i){
        visited2[i] = true;
        for(auto [j,cost]:adj2[i]){
            if(!visited2[j]){
                counter+=cost;
                dfs(j);
                //cout<<j<<" "<<i<<endl;
            }else{
                //cout<<j<< " "<<i<<endl;
                counter+=cost;
            }
        }
    }
      signed main(){
        int n,m;
        cin>>n>>m;
        visited2.resize(n);
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0; i<m;++i){
            int a,b,w;
            cin>>a>>b>>w; 
            adj[a].push_back({w,b});
            adj[b].push_back({w,a});
        }
        vector<int>dist(n,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        adj2 = vector<vector<pair<int,int>>>(n+10);
        dist[0] = 0;
        q.push({0,0});
        while(q.size()){
            auto [c,i] = q.top();
            q.pop();
            if(dist[i] != c)continue;
            for(auto [w,j] : adj[i]){
                if(c+w <dist[j]){
                    adj2[j] = {{i,w}};
                    dist[j] = c+w;
                    q.emplace(dist[j],j);
                }else if(c+w == dist[j]){
                    adj2[j].push_back({i,w});
                }
            }
        }
         dfs(n-1);
        cout<<counter*2<<endl;
     }