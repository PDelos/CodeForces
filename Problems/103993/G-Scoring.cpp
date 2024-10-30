#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 signed main()
{
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        s.insert(a);
    }
    while (s.size() > 1) {
        int x = *s.begin(), y = *s.rbegin();
        s.erase(s.find(x));
        s.erase(s.find(y));
        s.insert((x + y) / 2);
    }
     cout << *s.begin() << endl;
}