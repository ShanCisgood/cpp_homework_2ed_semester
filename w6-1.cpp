#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int h1, h2, m1, m2;
    while (cin >> h1 >> m1 >> h2 >> m2) {
        int ans = h2 - h1, k = 0;
        if (m2 - m1 > 0)
            ans++;
        for (int i = 1; i <= ans; i++) {
            if (i <= 2)
                k += 50;
            else if (i <= 10)
                k += 40;
            else
                k += 30;
        }
        cout << k << '\n';
    }

    return 0;
}
