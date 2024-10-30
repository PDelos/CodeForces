#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
  double EPS = 1e-7;
double absdouble(double a){
    if( a < 0)return -a;
    return a;
}
double dist(int x1, int y1, int x2, int y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
  signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<fixed<<setprecision(20);
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    int sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    int vel1,vel2;
    cin>>vel1>>vel2;
    vector<vector<double>>adj(n+2,vector<double>(n+2, INT_MAX));
    v.push_back({sx,sy});
    v.push_back({tx,ty});
    for(int i = 0; i < n+2; ++i){
        double d = dist(v[n].first, v[n].second, v[i].first, v[i].second);
        adj[n][i] = d/vel1;
    }
     for(int i = 0; i < n+2; ++i){
        double d = dist(v[n+1].first, v[n+1].second, v[i].first, v[i].second);
        adj[n+1][i] = d/vel1;
    }
     for(int i = 0; i < n; ++i){
        for(int j  = 0; j < n+2; ++j){
            double d = dist(v[i].first, v[i].second, v[j].first, v[j].second);
            if(vel2*3 >= d) adj[i][j] = d/vel2;
               else adj[i][j] = 3 + (d-vel2*3)/vel1;
        }
    }
    priority_queue<pair<double,int>,vector<pair<double,int>>,greater<pair<double,int>>>q;
    vector<double>dist(n+2, INT_MAX);
    dist[n] = 0;
    q.push({0,n});
     while(!q.empty()){
        auto [c,v] = q.top();
        //cout<<c<<" "<<v<<endl;
        q.pop();
        if(absdouble(c - dist[v]) > EPS)continue;
        for(int i=0;i<n+2;++i){
            if(i == v)continue;
            double cost = adj[v][i];
            if(dist[i] > cost + c){
                dist[i] = cost + c;
                q.push({cost +  c,i});
            }
        }
     }
     cout << dist[n+1]<<endl;
 }