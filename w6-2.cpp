#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e2 + 5;
bool vis[MAXN][3];
int board[MAXN], n, ans;

void dfs(int pos) {
    if (pos == n) {
        ans++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i][0] && !vis[pos + i][1] && !vis[pos + n - i][2]) {
            vis[i][0] = vis[pos + i][1] = vis[pos + n - i][2] = true;
            board[pos] = i;
            dfs(pos + 1);
            vis[i][0] = vis[pos + i][1] = vis[pos + n - i][2] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> n) {
        ans = 0;
        dfs(0);
        cout << ans << '\n';
    }

    return 0;
}
