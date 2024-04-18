#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        double tmp;
        cin >> tmp;
        cout << fixed << setprecision(2) << tmp * 3.306 << " " << fixed << setprecision(2) << tmp * 3.95 << '\n';
    }

    return 0;
}
