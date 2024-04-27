#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

vector<pii> vec;

bool cmp(pii a, pii b) {
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    while (cin >> s) {
        pii time;
        time.first = (s[0] - '0') * 10 + (s[1] - '0');
        time.second = (s[3] - '0') * 10 + (s[4] - '0');
        vec.push_back(time);
    }
    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i].first < 10)
            cout << "0";
        cout << vec[i].first << ":";
        if (vec[i].second < 10)
            cout << "0";
        cout << vec[i].second << " ";
    }

    return 0;
}
