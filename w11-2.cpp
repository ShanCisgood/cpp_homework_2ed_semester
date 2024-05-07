#include <bits/stdc++.h>
#define ll long long
using namespace std;

template <typename T, typename V, typename N>
T abs_product(V a, V b, N n, T ans) {
    for (int i = 0; i < n; i++)
        ans += abs(a[i]) * abs(b[i]);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    ll ans = 0, tmp;
    vector<ll> a, b;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> tmp, a.push_back(tmp);
    for (int i = 0; i < n; i++)
        cin >> tmp, b.push_back(tmp);

    cout << abs_product(a, b, n, ans) << '\n';

    return 0;
}
