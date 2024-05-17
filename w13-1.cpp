#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double mat[2][2], det;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> mat[i][j];
    det = mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1];
    swap(mat[0][0], mat[1][1]);
    mat[1][0] = -mat[1][0];
    mat[0][1] = -mat[0][1];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cout << fixed << setprecision(1) << mat[i][j] / det << " \n"[j];

    return 0;
}