#include<bits/stdc++.h>
using namespace std;
double pi=acos(-1.);
struct point
{
 double x,y;
 point operator+(const point &p)const{return {x+p.x,y+p.y};}
 point operator-(const point &p)const{return {x-p.x,y-p.y};}
 point operator*(const double k)const{return {x*k,y*k};}
 point operator/(const double k)const{return {x/k,y/k};}
 point turn90()const{return {-y,x};}
 point turn(const double d)const{return {x*cos(d)-y*sin(d),x*sin(d)+y*cos(d)};}
 point flip()const{return {x,-y};}
 double abs()const{return hypot(x,y);}
 double abs2()const{return x*x+y*y;}
 point unit()const{return *this/abs();}
};
point getmid(const point &A,const point &B)
{
 point del=B-A;
 point mid=(A+B)/2.;
 point t=del.unit().turn90()*(sqrt(1.-del.abs2()/4.));
 point C=mid+t,D=mid-t;
 if(C.abs2()>D.abs2())return C;
 return D;
}
int main()
{
 ios_base::sync_with_stdio(false);
 int T;
 cin>>T;
 while(T--)
 {
  int a,b;
  cin>>a>>b;
  double turn=pi*a/180;
  b-=a;
  if(b<0)b+=360;
  int flip=0;
  if(b>180)flip=1,b=360-b;
  vector<point> ans;
  point start{1.,0.},end{cos(b*pi/180.),sin(b*pi/180.)};
  ans.push_back(start);
  if(b==0)
  {
     }
  else if(b<=90)
  {
   ans.push_back(getmid(start,end));
   ans.push_back(end);
  }
  else if(b<=131)
  {
   ans.push_back({1.,1.});
   ans.push_back(getmid({1.,1.},end));
   ans.push_back(end);
  }
  else
  {
   ans.push_back({1.,1.});
   ans.push_back({0.,1.});
   ans.push_back(getmid({0.,1.},end));
   ans.push_back(end);
  }
  for(auto &z:ans)
  {
   if(flip)z=z.flip();
   z=z.turn(turn);
  }
  cout<<ans.size()-1<<endl;
  for(auto z:ans)
  {
   cout<<fixed<<setprecision(10)<<z.x<<' '<<z.y<<endl;
  }
 }
  return 0;
}