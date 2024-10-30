#include<bits/stdc++.h>
#define int long long
using namespace std;
 vector<vector<char>>vc;
 bool valid (int x, int y) {
    int b = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (vc[i+x][j+y] == '#') ++b;
        }
    }
    if (b != 88) return false;
    bool bo = true;
    if (vc[x+3][y+4] != '.' || vc[x+3][y+5] != '.') bo = false;
    if (vc[x+6][y+4] != '.' || vc[x+6][y+5] != '.') bo = false;
    for (int j = y + 3; j < y + 7; ++j) 
        if (vc[x+4][j] != '.') bo = false;
    for (int j = y + 3; j < y + 7; ++j) 
        if (vc[x+5][j] != '.') bo = false;
    return bo;
} 
 void solve () {
    int n, m, b = 0;
    cin >> n >> m;
    vc = vector<vector<char>>(n, vector<char>(m));
    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) {
            cin >> vc[i][j];
            if (vc[i][j] == '#') ++b;
        }
     int f = 0;
    for (int i = 0; i < n-9; ++i) {
        for (int j = 0; j < m-9; ++j) {
            if (valid (i, j)) {
                ++f;
            }
        }
    }
    int x = (-b + 100*f) / 54, y;
    y = f - 2*x;
    cout << x << " " << y << endl;
}   
 signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    solve();
}