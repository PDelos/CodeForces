#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<pair<string,int>>v;
int n;
void prnt(vector<pair<string,int>>v){
    for(auto i:v){
        cout<< i.first<< " "<< i.second<<endl;
    }
    cout<<endl;
}
int mx = 0;
 bool included(string a, string b){
    //b inlclude in a;
   // cout<<"caca"<<endl;
    //cout<<a<<" "<<b<<endl;
    //cout<<"caca"<<endl;
    if(a.size() <= b.size())return false;
    for(int i=0;i<b.size();++i){
        if(b[i] !=a[i])return false;
    }
    return true;
}
 int solve(int j, int val){
    //cout << v[j].first<< " "<<val << " caca" <<endl;
    //solves for all the ones that have v[j].first included.
    mx = max(mx,val + v[j].second);
    vector<int>next = {j+1};
    for(int i=0;i<next.size();++i){
        int nxt = next[i];
        if(nxt >= n || nxt == -1){
            return -1;
        }
       // cout<<v[nxt].first<< " " <<endl;
        if(included(v[nxt].first,v[j].first)){
            int idx = solve(nxt,val + v[j].second);
            next.push_back(idx);
           // cout<<"Hola"<<endl;
        } else{
           // cout<<"Hhola"<<endl;
            return nxt;
        }
    }
}
  signed main(){
    cin>>n;
    v.resize(n);
     for(int i=0;i<n;++i){
        string a;
        int p;
        cin>>a>>p;
        v[i] = {a,p};
    }
    sort(v.begin(),v.end(), [](pair<string,int>a, pair<string,int>b){
        return a.first<b.first || a.first == b.first && a.second> b.second;
    });
    //prnt(v);
    //cout<<endl;
    //cout<<v.size()<<endl;
    //cout <<solve(1,0)<<endl;
    vector<int>next = {0};
    for(int i=0;i<next.size();++i){
        int a = solve(next[i],0);
        if(a != -1)next.push_back(a);
    }
    cout<<mx<<endl;
}
  /*
10
hola 10          
hola 123
dsañlkñlknl 123
hola 2123
hola3 21 
hola33 211
hola 123
holakdn22  21312
hola 231
hola 4123
*/