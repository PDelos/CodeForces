#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
 typedef vector<int>vi;
 vector<vector<char>> t;
 bool valid(char c) {
    for (int i = 0; i < 3; ++i)
        if (t[i][0] == c && t[i][1] == c && t[i][2] == c) return true;
    for (int i = 0; i < 3; ++i)
        if (t[0][i] == c && t[1][i] == c && t[2][i] == c) return true;
     if (t[0][0] == c && t[1][1] == c && t[2][2] == c) return true;
    if (t[0][2] == c && t[1][1] == c && t[2][0] == c) return true;
     return false;
}
 void solve() {
    t = vector<vector<char>>(3, vector<char>(3));
    for (int i = 0; i < 3; ++i)
        for (char & c: t[i]) cin >> c;
     if (valid('X')) cout << 'X' << endl;
    else if (valid('O')) cout << 'O' << endl;
    else if (valid('+')) cout << '+' << endl;
    else cout << "DRAW" << endl;
}
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        solve();
}