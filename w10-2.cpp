#include <cmath>
#include <iostream>
using namespace std;

// 設計樣板
// Create templates.
/* 可自由設計樣板 sum, abs_sum, product, compute
   Write code here to create templates for sum, abs_sum, product, and compute.
...
... */

template <typename T>
T sum(T arr[], T n, T v) {
    for (int i = 0; i < n; i++)
        v += arr[i];
    return v;
}

template <typename T>
T abs_sum(T arr[], T n, T v) {
    for (int i = 0; i < n; i++)
        v += abs(arr[i]);
    return v;
}

template <typename T>
T product(T arr[], T n, T v) {
    for (int i = 0; i < n; i++)
        v *= arr[i];
    return v;
}

template <typename T, typename F>
T compute(F fn, T arr[], T n, T v) {
    return fn(arr, n, v);
}

int main() {
    // 請勿更動main()函式裡的程式碼
    // Please do not modify the code inside the main() function.
    int foo[10];
    int S;
    cin >> S;
    for (int i = 0; i < S; i++)
        cin >> foo[i];
    int v;
    v = 0;
    cout << compute(sum<int>, foo, S, v) << endl;
    v = 0;
    cout << compute(abs_sum<int>, foo, S, v) << endl;
    v = 1;
    cout << compute(product<int>, foo, S, v) << endl;
    return 0;
}
