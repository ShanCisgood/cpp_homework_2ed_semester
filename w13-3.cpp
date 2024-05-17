#include <bits/stdc++.h>
using namespace std;

string dtob(int x) {
    int t = 1, ans = 0;
    string s = "", tmp = "";
    while (x) {
        if (x & 1)
            tmp += "1";
        else
            tmp += "0";
        x >>= 1;
    }
    while (tmp.size() < 5)
        tmp += '0';
    for (int i = tmp.size() - 1; i >= 0; i--)
        s += tmp[i];

    return s;
}
char btoh(string s) {
    int t = 1, ans = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '1')
            ans += t;
        t *= 2;
    }
    return (ans >= 10 ? 'a' + (ans -= 10) : '0' + ans);
}

int main() {
    int n;
    string str, tmp, ans;
    cin >> n >> str;
    for (int i = 0; i < str.size(); i++) {
        int k = str[i] - 'A' + n + 1;
        if (k > 26)
            k -= 26;
        tmp += dtob(k);
    }
    tmp += "00000";
    while (tmp.size() % 8 > 0)
        tmp += '0';

    for (int i = 0; i < tmp.size(); i += 4) {
        string t = "";
        for (int j = i; j < i + 4; j++) {
            if (j >= tmp.size())
                break;
            else
                t += tmp[j];
        }
        ans += btoh(t);
    }
    cout << ans << '\n';
    return 0;
}