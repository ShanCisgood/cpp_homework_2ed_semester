#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int c[9], flag;
    while (cin >> c[8]) {
        flag = 1;
        for (int i = 7; i >= 0; --i)
            cin >> c[i];

        for (int i = 8; i >= 0; --i) {
            if (c[i] == 0)
                continue;

            if (flag == 1) {
                flag = 0;
                if (c[i] < 0)
                    cout << "-";
            }
            else {
                if (c[i] > 0)
                    cout << " + ";
                else
                    cout << " - ";
            }

            if (c[i] < 0)
                c[i] = -c[i];

            if (c[i] != 1 || i == 0)
                cout << c[i];

            if (i >= 2)
                cout << "x^" << i;
            else if (i == 1)
                cout << "x";
        }

        if (flag == 1)
            cout << c[0];

        cout << "\n";
    }

    return 0;
}
