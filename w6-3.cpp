#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    int t = 1;
    while (cin >> str) {
        int anum[MAXN] = {0}, bnum[MAXN] = {0}, n = str.size();

        for (int i = 0; i < n; i++) {
            anum[i + 1] = anum[i], bnum[i + 1] = bnum[i];
            if (str[i] == 'a')
                anum[i + 1]++;
            else
                bnum[i + 1]++;
        }

        cout << "AB Circle #" << t++ << ":\n";
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (anum[j] - anum[i] == bnum[n] + bnum[i] - bnum[j] ||
                    bnum[j] - bnum[i] == anum[n] + anum[i] - anum[j])
                    cout << i << ',' << j << endl;
        cout << "\n";
    }
}
