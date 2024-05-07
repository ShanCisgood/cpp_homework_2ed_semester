#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define ft first
#define sec second
#define pr pair<int, int>
#define ISCC                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
int t, n, m, x, y, pos[30];
string s1, s2;
deque<int> a[30];
inline void ini(int p, int v) {
    for (auto i = a[p].rbegin(); (*i) != v; i++) {
        a[*i].pf(*i);
        pos[*i] = *i;
        a[p].pop_back();
    }
}
inline void pil(int p, int v, int des) {
    auto k = a[p].begin();
    while ((*k) != v && k != a[p].end())
        k++;
    for (auto i = k; i != a[p].end(); i++) {
        a[des].pb(*i);
        pos[*i] = des;
    }
    a[p].erase(k, a[p].end());
}
int main() {
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            a[i].clear(), a[i].pf(i), pos[i] = i;
        while (cin >> s1 && s1 != "quit") {
            cin >> x >> s2 >> y;
            if (pos[x] == pos[y])
                continue;
            if (s1 == "move") {
                if (s2 == "onto" && a[pos[y]].back() != y)
                    ini(pos[y], y);
                if (a[pos[x]].back() != x)
                    ini(pos[x], x);
                a[pos[y]].pb(x);
                a[pos[x]].pop_back();
                pos[x] = pos[y];
            }
            else {
                if (s2 == "onto" && a[pos[y]].back() != y)
                    ini(pos[y], y);
                pil(pos[x], x, pos[y]);
            }
        }
        for (int i = 0; i < n; i++, cout << '\n') {
            cout << i << ":";
            for (auto v : a[i])
                cout << ' ' << v;
        }
    }
    return 0;
}
