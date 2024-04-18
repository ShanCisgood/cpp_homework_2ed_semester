#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long double n, p, i;
        cin >> n >> p >> i;
        long double k = 1 - p;
        cout << fixed << setprecision(4) << (p * pow(k, i - 1)) / (1 - pow(k, n)) << '\n';
    }

    return 0;
}
