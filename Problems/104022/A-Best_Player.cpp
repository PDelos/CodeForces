#include <bits/stdc++.h>
#define endl "\n"
#define int long long int
using namespace std;
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    set<pair<int, int>>cx, cy, cz;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        cx.insert({y, z});
        cy.insert({x, z});
        cz.insert({x, y});
    }
    if (cx.size () >= cy.size() && cx.size() >= cz.size()) cout << 'X' << endl;
    else if (cy.size () >= cx.size() && cy.size() >= cz.size()) cout << 'Y' << endl;
    else cout << 'Z' << endl;
}