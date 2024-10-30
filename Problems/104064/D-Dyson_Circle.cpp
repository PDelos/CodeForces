#include <bits/stdc++.h>
#define int long long
using namespace std;
 struct pt{
    int x,y;
};
 //x1*y2 - x2y1 + x2y3 -y3x1+y1x3- x3y2
bool clock_wise(pt a, pt b, pt c){
    return a.x*b.y - b.x*a.y + b.x*c.y - c.y*a.x+ a.y*c.x - c.x*b.y<=0;
}
 bool not_clock_wise(pt a,pt b,pt c){
    return a.x*b.y - b.x*a.y + b.x*c.y - c.y*a.x +a.y*c.x - c.x*b.y >=0;
}
 int area(pt a, pt b, pt c){
    return a.x*b.y - b.x*a.y + b.x*c.y - c.y*a.x +a.y*c.x - c.x*b.y;    
}
bool check(vector<pt>hull){
    for(int i=1;i<hull.size();++i){
        if(abs(hull[i].x-hull[i-1].x)!= abs(hull[i].y-hull[i-1].y))return false;
    }
    return true;
}
 signed main(){
    int n;
    cin>>n;
    if(n == 1){
        cout<<4<<endl;
    }else{
    vector<pt>v(n);
    for(int i=0; i<n;++i){
        pt a;
        cin>>a.x>>a.y;
        v[i] = a;
    }
    sort(v.begin(),v.end(),[](pt a, pt b){return a.x <b.x || a.x==b.x && a.y<b.y;});
    pt A=v[0],B=v[n-1];
       vector<pt>uphull,downhull;
    uphull.push_back(A);
    downhull.push_back(A);
    for(int i=1; i<n;++i){
        if(i==n-1 || clock_wise(A,v[i],B)){
            while(uphull.size() >=2 && !clock_wise(uphull[uphull.size()-2],uphull[uphull.size()-1],v[i]))
                uphull.pop_back();
            uphull.push_back(v[i]);
        }
        if(i==n-1 || not_clock_wise(A,v[i],B)){
            while(downhull.size()>=2 && !not_clock_wise(downhull[downhull.size()-2],downhull[downhull.size()-1],v[i]))
                downhull.pop_back();
            downhull.push_back(v[i]);
        }
    }
    vector<pt>hull;
    for(int i=0; i<downhull.size();++i){
        hull.push_back(downhull[i]);
    }
    for(int i=uphull.size()-2; i>0;--i){
        hull.push_back(uphull[i]);
    }
    bool aligned = check(hull);
    int dist = 0;
    for(int i=1;i<hull.size();++i){
        dist += max(abs(hull[i-1].x-hull[i].x),abs(hull[i-1].y-hull[i].y));
    }
    dist += max(abs(hull[0].x-hull[hull.size()-1].x),abs(hull[0].y-hull[hull.size()-1].y));
    dist += 4;
    if(aligned)dist+=1;
    cout<<dist<<endl;
    }
}