#include <iostream>
#define ull unsigned long long
using namespace std;

const int MAXN = 1005;
ull dp[MAXN][MAXN];

void init() {
    for (int i = 0; i <= 100; i++)
        dp[i][0] = dp[i][i] = 1;
}

ull comb(int n, int k) {
    if (dp[n][k])
        return dp[n][k];
    else {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j < n; j++)
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];

        return dp[n][k];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    init();
    int n, k;
    while (cin >> n) {
        cout << '[';
        for (int i = 0; i < n; i++) {
            cout << '[';
            for (int j = 0; j <= i; j++) {
                cout << comb(i, j);
                if (j != i)
                    cout << ',';
            }
            cout << "]";
            if (i != n - 1)
                cout << ',';
        }
        cout << ']';
        cout << '\n';
    }

    return 0;
}
