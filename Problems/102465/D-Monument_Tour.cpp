#include <bits/stdc++.h>
#define int long long
using namespace std;
    typedef vector<int> vi;
typedef pair<int, int>pi;
    void solve(){
    int n, m, t;
    cin >> n >> m >> t;
    vector<int>vy;
    vector<pi>v, vx(n);
    for (int i = 0; i < n; ++i)
        vx[i] = {LONG_LONG_MAX, -1};
        while (t--) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        pi p = vx[x];
        p.first = min (p.first, y);
        p.second = max (p.second, y);
        vx[x] = p;
    }
     vi median;
    for (pi p : vx){
        if (p.first != LONG_LONG_MAX && p.second != -1) {
                median.push_back(p.first);
                median.push_back(p.second);
                    }
    }
    sort (median.begin(), median.end());
     int co = median[median.size() / 2];
    // cout << co << endl;
     int awn = n;
    // cout << awn << endl;
    for (int i = 0; i < vx.size(); ++i) {
        if (vx[i].first != LONG_LONG_MAX && vx[i].second != -1) {
            if (vx[i].first == vx[i].second) {
                awn += abs(vx[i].first - co) * 2;
            }else {
                if (vx[i].first >= co)
                    awn += abs(vx[i].second - co) * 2;
                else if (vx[i].second <= co)
                    awn += abs(vx[i].first - co) * 2;
                else awn += abs(vx[i].first - vx[i].second) * 2; 
            }
        }
        // cout << vx[i].first << " " << vx[i].second << " "  << awn <<  " " << i << endl;
    }
     co = median[(median.size() / 2) - 1];
    // cout << co << endl;
     int awn1 = n;
    // cout << awn1 << endl;
    for (int i = 0; i < vx.size(); ++i) {
        if (vx[i].first != LONG_LONG_MAX && vx[i].second != -1) {
            if (vx[i].first == vx[i].second) {
                awn1 += abs(vx[i].first - co) * 2;
            }else {
                if (vx[i].first >= co)
                    awn1 += abs(vx[i].second - co) * 2;
                else if (vx[i].second <= co)
                    awn1 += abs(vx[i].first - co) * 2;
                else awn1 += abs(vx[i].first - vx[i].second) * 2; 
            }
        }
        // cout << vx[i].first << " " << vx[i].second << " "  << awn <<  " " << i << endl;
    }
    cout << min(awn, awn1) - 1 << endl;
}
    signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}