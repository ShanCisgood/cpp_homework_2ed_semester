#include <iostream>
#define ull unsigned long long
using namespace std;

const int MAXN = 105;
int n1, k1, cn = 0, ck = 0;
ull dp[MAXN][MAXN];

ull comb_m(int n, int k) {
    if (n == n1 && k == k1)
        cn++;
    if (n == k || k == 0)
        return 1;
    else if (dp[n][k])
        return dp[n][k];
    dp[n][k] = comb_m(n - 1, k - 1) + comb_m(n - 1, k);
    return dp[n][k];
}

ull comb_n(int n, int k) {
    if (n == n1 && k == k1)
        ck++;
    if (n == k || k == 0)
        return 1;

    return comb_n(n - 1, k - 1) + comb_n(n - 1, k);
}

void init() {
    for (int i = 0; i < MAXN; i++)
        for (int j = 0; j < MAXN; j++)
            dp[i][j] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    while (cin >> n >> k >> n1 >> k1) {
        if (n < k) {
            cout << "error\n";
            continue;
        }

        init();

        cn = ck = 0;
        ull ans = comb_n(n, k);
        ans = comb_m(n, k);
        cout << dp[n][k] << ' ' << cn << ' ' << ck << '\n';
    }

    return 0;
}