#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int len;
    while (cin >> len) {
        if (len < 1500)
            cout << "70\n";
        else if (len > 1500) {
            len -= 1500;
            cout << 70 + len / 500 * 5 + (len % 500 > 0) * 5 << '\n';
        }
    }

    return 0;
}
