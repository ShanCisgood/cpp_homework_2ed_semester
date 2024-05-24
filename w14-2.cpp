#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
map<string, int>::iterator it;
map<string, bool> mp2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string s;
    cin >> s >> n;
    int len = s.length();
    for (int i = 0; i <= len - n; i++) {
        string tmp;
        for (int j = 0; j < n; j++)
            tmp.push_back(s[i + j]);
        // cout << tmp << '\n';
        mp[tmp]++;
    }

    for (int i = 0; i <= len - n; i++) {
        string tmp;
        for (int j = 0; j < n; j++)
            tmp.push_back(s[i + j]);
        if (!mp2[tmp]) {
            cout << "> " << tmp << " : " << mp[tmp] << '\n';
            mp2[tmp] = true;
        }
    }

    return 0;
}
