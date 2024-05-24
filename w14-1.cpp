#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;
map<char, string> mp2;

void init() {
    mp['A'] = 10, mp['B'] = 11, mp['C'] = 12, mp['D'] = 13, mp['E'] = 14;
    mp['F'] = 15, mp['G'] = 16, mp['H'] = 17, mp['I'] = 34, mp['J'] = 18;
    mp['K'] = 19, mp['L'] = 20, mp['M'] = 21, mp['N'] = 22, mp['O'] = 35, mp['P'] = 23;
    mp['Q'] = 24, mp['R'] = 25, mp['S'] = 26, mp['T'] = 27, mp['U'] = 28;
    mp['V'] = 29, mp['W'] = 32, mp['X'] = 30, mp['Y'] = 31, mp['Z'] = 33;

    mp2['A'] = "台北市", mp2['B'] = "台中市", mp2['C'] = "基隆市", mp2['D'] = "台南市", mp2['E'] = "高雄市";
    mp2['F'] = "台北縣", mp2['G'] = "宜蘭縣", mp2['H'] = "桃園縣", mp2['I'] = "嘉義市", mp2['J'] = "新竹縣";
    mp2['K'] = "苗栗縣", mp2['L'] = "台中縣", mp2['M'] = "南投縣", mp2['N'] = "彰化縣", mp2['O'] = "新竹市",
    mp2['P'] = "雲林縣";
    mp2['Q'] = "嘉義縣", mp2['R'] = "台南縣", mp2['S'] = "高雄縣", mp2['T'] = "屏東縣", mp2['U'] = "花蓮縣";
    mp2['V'] = "台東縣", mp2['W'] = "金門縣", mp2['X'] = "澎湖縣", mp2['Y'] = "陽明山", mp2['Z'] = "連江縣";
}

bool is_valid(string s) {
    if (s[1] != '2' && s[1] != '1')
        return false;
    int ans = (mp[s[0]] % 10) * 9 + mp[s[0]] / 10;
    for (int i = 1, j = 8; i < 10; i++, j--) {
        if (s[i] >= '0' && s[i] <= '9')
            ans += (s[i] - '0') * j;
        else
            return false;
    }
    ans += (s[9] - '0');
    return (ans % 10 == 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    init();
    while (cin >> s) {
        int sz = s.length();
        if (sz != 10 || !(s[0] >= 'A' && s[0] <= 'Z') || !is_valid(s))
            cout << "無效\n";
        else
            cout << mp2[s[0]] << ' ' << (s[1] == '1' ? "男性" : "女性") << '\n';
    }

    return 0;
}
