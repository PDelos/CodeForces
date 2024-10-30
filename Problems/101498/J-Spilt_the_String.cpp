#include <bits/stdc++.h>
using namespace std;
 int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    getline(cin, s);
    while (n--) {
        vector<int>v = {0-1};
        int vs = 0;
        getline(cin, s);
        int maxL = 1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == ' ') {
                v.push_back(i);
                //cout << i << endl;
                ++vs;
                maxL = max(maxL, v[vs]-v[vs-1]-1);
            }
        }
        int sz = v[1], ind = 1;
        while (sz < maxL) {
            ++ind;
            sz = v[ind];
        }
        bool possible = false;
        while (ind <= vs and !possible) {
            bool passed = true;
            int i = sz*2+1;
            for (; i < s.size(); i += sz+1) {
                if (s[i] != ' ') {passed = false; break;}
            }
            if (passed and i == s.size()) possible = true;
            ++ind;
            sz = v[ind];
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}