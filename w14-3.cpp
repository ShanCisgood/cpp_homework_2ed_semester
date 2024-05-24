#include <bits/stdc++.h>
using namespace std;

bool isNum_Alpha(char c) {
    return (c - '0' >= 0 && c - '0' <= 9) || (c - 'A' >= 0 && c - 'A' <= 25) || (c - 'a' >= 0 && c - 'a' <= 25);
}

bool is_IPv4(string s) {
    bool new_num = true, single_zero = false;
    int cnt = 1, num = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            single_zero = false;
            new_num = true, num = 0, cnt++;
            continue;
        }
        if (single_zero)
            return false;
        if (s[i] - '0' < 0 || s[i] - '0' > 9)
            return false;
        if (new_num && s[i] == '0')
            single_zero = true;

        new_num = false;
        num = num * 10 + s[i] - '0';
        if (num > 255)
            return false;
    }
    return (cnt == 4);
}

bool is_IPv6(string s) {
    int i = 0;
    int cnt = 0;
    bool colon = false;
    if (!isNum_Alpha(s[0]) || !isNum_Alpha(s[s.length() - 1]))
        return false;

    while (i < s.length()) {
        if (s[i] == ':') {
            if (colon)
                return false;
            colon = true, cnt = 0;
            i++;
            continue;
        }
        if (isNum_Alpha(s[i]))
            colon = false, cnt++;
        else
            return false;
        if (cnt > 4)
            return false;
        i++;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string input;
    while (cin >> input) {
        if (is_IPv4(input))
            cout << "IPv4\n";
        else if (is_IPv6(input))
            cout << "IPv6\n";
        else
            cout << "N\n";
    }

    return 0;
}
