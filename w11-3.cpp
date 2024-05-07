#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    vector<string> vec1;
    vector<int> num;
    vector<vector<int>> vec2;

    cin >> s;
    sort(s.begin(), s.end());

    for (int c : s)
        num.push_back(c - '0');

    do {
        if (s[0] != '0')
            vec1.push_back(s);
    } while (next_permutation(s.begin(), s.end()));

    do {
        if (num[0] != 0)
            vec2.push_back(num);
    } while (next_permutation(num.begin(), num.end()));

    sort(vec1.begin(), vec1.end());
    cout << vec1[0] << '\n';
    for (int i : vec2[0])
        cout << i;

    // for (string i : vec)
    //     cout << i << "\n";

    return 0;
}
