#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    while (cin >> s) {
        int num = 0, cnt = 1, n = s.length(), check;
        for (int i = 0; i < n; i++) {
            if (s[i] >= '0' && s[i] <= '9' && i != n - 1) {
                num += cnt * (s[i] - '0');
                cnt++;
            }
            if (i == n - 1) {
                check = (s[i] == 'X' ? 10 : (s[i] - '0'));
            }
        }
        if (check == num % 11) {
            cout << "OK\n";
        }
        else {
            for (int i = 0; i < n - 1; i++) {
                cout << s[i];
            }
            cout << (num % 11 == 10 ? 'X' : num % 11) << "\n";
        }
    }

    return 0;
}
