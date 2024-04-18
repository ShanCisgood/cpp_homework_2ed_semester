#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

int solve(int i, int j, int chance) {
    if (i > j)
        return 0;
    if (chance == 0)
        return max(vec[i] + solve(i + 1, j, 1), vec[j] + solve(i, j - 1, 1));
    else
        return min(solve(i + 1, j, 0), solve(i, j - 1, 0));
}

bool PredictTheWinner() {
    int n = vec.size();
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + vec[i];
    long long one = (long long)solve(0, n - 1, 0);
    sum = sum - one;
    // cout << one << ' ' << sum << '\n';
    return (one >= sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n && n) {
        int tmp;
        vector<int> k;
        vec = k;
        for (int i = 0; i < n; i++)
            cin >> tmp, vec.push_back(tmp);
        cout << (PredictTheWinner() ? "WIN" : "LOSE") << '\n';
    }

    return 0;
}
