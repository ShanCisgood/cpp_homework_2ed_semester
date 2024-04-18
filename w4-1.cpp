#include <bits/stdc++.h>
using namespace std;

vector<string> vec;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);

    string cmd;
    int sz = 0;

    while (cin >> cmd) {
        if (cmd == "ADD") {
            string tmp;
            cin >> tmp;
            vec.push_back(tmp);
            sz++;
        }
        else if (cmd == "INSERT") {
            string x, n;
            sz++;
            int idx = -1;
            cin >> x;
            cin >> n;
            for (int i = 0; i < vec.size(); i++) {
                if (n == vec[i]) {
                    idx = i;
                    break;
                }
            }
            if (idx != -1)
                vec.insert(vec.begin() + idx, x);
        }
        else if (cmd == "REMOVE") {
            string tmp;
            cin >> tmp;
            for (int i = 0; i < vec.size(); i++) {
                if (tmp == vec[i]) {
                    vec[i] = "";
                    break;
                }
            }
        }
        else if (cmd == "SHOW") {
            for (int i = 0; i < vec.size(); i++) {
                if (vec[i] == "")
                    continue;
                cout << vec[i] << " ";
            }
            cout << '\n';
        }
    }

    return 0;
}
