#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int MAXN = 1e4 + 5;
int mp[MAXN][MAXN];
int v[9][2] = {
    {1,  0 },
    {1,  1 },
    {0,  1 },
    {-1, 1 },
    {-1, 0 },
    {-1, -1},
    {0,  -1},
    {1,  -1},
    {0,  0 }
};
int dir[4][2] = {
    {1,  0 },
    {-1, 0 },
    {0,  1 },
    {0,  -1}
};
int m, n, tmp = 0;
bool in_range(int x, int y) { return (x > 0 && y > 0) && (x <= m && y <= n); }
// void dfs(int sx, int sy) {
//     for (int i = 0; i < 4; i++) {
//         int x = sx + dir[i][0], y = sy + dir[i][1];
//         if (in_range(x, y) && mp[x][y]) {
//             dfs(x, y);
//         }
//     }
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int misl, cnt = 0;
    vector<pii> vec;
    cin >> n >> m >> misl;

    for (int i = 0; i < misl; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back({a, b});
        for (int j = 0; j < 9; j++) {
            int x = a + v[j][0], y = b + v[j][1];
            if (in_range(x, y))
                mp[x][y]++;
        }
    }

    for (int i = 0; i < misl; i++) {
        for (int j = 0; j < 9; j++) {
            int x = vec[i].first + v[j][0], y = vec[i].second + v[j][1];
            if (in_range(x, y))
                mp[x][y]--;
        }
        for (int j = 0; j < 9; j++) {
            int x = vec[i].first + v[j][0], y = vec[i].second + v[j][1];
            if (in_range(x, y) && mp[x][y]) {
                cnt++;
                break;
            }
        }
    }

    cout << misl - cnt << '\n';

    return 0;
}
