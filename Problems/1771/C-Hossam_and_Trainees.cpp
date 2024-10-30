#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 typedef vector<int> vi;
 set<int>f;
bool bo = false;
vector<int>primes;
 void crib() {
    int M = sqrt(1e9 + 2);
    vector<bool>used(M + 4, true);
    for (int i = 2; i <= M; ++i) {
        if (!used[i]) continue;
        primes.push_back(i);
         for (int j = i * i; j <= M; j += i)
            used[j] = false;
    }
}
  void fact (int n) {
    int i = 0;
    for (int prim: primes){
        if (prim*prim > n) break;
                if (n % prim == 0) {
            while (n % prim == 0) 
                n /= prim;
            if (f.find(prim) != f.end()) bo = true;
            f.insert(prim);
        }
        ++i;
    }
    if (n > 1) {
        if (f.find(n) != f.end()) bo = true;
        f.insert(n);
    }
} 
 void solve() {  
    int n;
    cin >> n;
    vector<int>v(n);
    for (int &i : v) cin >> i;
    f.clear();
    bo = false;
    for (int e: v) {
        fact(e);
    }
    cout << (bo ? "YES" : "NO") << endl;
}
    signed main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    crib();
    int t;
    cin >> t;
    while (t--)
        solve();
}