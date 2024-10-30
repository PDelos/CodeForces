#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    return a.second < b.second;
}
//1  0  0  1  1  1  1  0  0  0  1  1  1  1  0 | 9
//x6 10 x1 x9 x6 11 x7 11 x5 x0 x5 10 13 x6  13
//143 in theory XD
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
     vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
     int ans = 0, i = 0;
    while (s[i] == '1') {
        ans += v[i];
        ++i;
    }
    for (; i < n; ++i) {
        if (s[i] == '0')
            continue;
        int m = v[i - 1], j = i;
        ans += m;
        while (s[j] == '1' && j < n) {
            ans += v[j];
            m = min(v[j], m);
            ++j;
        }
        ans -= m;
        i = j - 1;
    }
    cout << ans << endl;
}