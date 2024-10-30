#include <iostream>
using namespace std;
 int main(){
    long long t; cin>>t;
    while(t--){
        long long a,b; cin>>a>>b;
        long long digitsa=to_string(a).size();
        long long num=b;
        while(digitsa--){
            num*=10;
        }
        long long k=-num%a;
        while(k<0){
            k+=a;
        }
        cout<<num+k<<endl;
     }
}