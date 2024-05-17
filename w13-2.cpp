#include <bits/stdc++.h>
using namespace std;

void output(int a) {
    if (a / 60 < 10)
        cout << '0';
    cout << a / 60 << " : ";
    if (a % 60 < 10)
        cout << '0';
    cout << a % 60 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    output(a);
    output(a + b);
    output(a + b + 1);

    for (int i = b; i >= 0; i--)
        output(i);

    return 0;
}