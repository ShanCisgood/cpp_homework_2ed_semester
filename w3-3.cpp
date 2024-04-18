#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string name;
    vector<int> hunderd = {1, 0, 0};
    while (cin >> name) {
        int st;
        for (st = 1; st < 10000; st++) {
            int len = name.length(), tmp;
            vector<int> nums;
            for (int i = 0; i < len; i++) {
                if (!(name[i] >= 'A' && name[i] <= 'Z'))
                    continue;
                tmp = name[i] - 'A' + st;
                // if (st == 81)
                //     cout << tmp;
                vector<int> aa;
                while (tmp) {
                    aa.push_back(tmp % 10);
                    tmp /= 10;
                }
                while (!aa.empty()) {
                    nums.push_back(aa.back());
                    aa.pop_back();
                }
            }
            // if (st == 81) {
            //     for (int i : nums)
            //         cout << i;
            //     cout << '\n';
            // }
            // cout << "-------\n";
            while (nums != hunderd && nums.size() > 2) {
                vector<int> vec;
                // if (st == 81) {
                //     for (int i : nums)
                //         cout << i;
                //     cout << '\n';
                // }
                for (int i = 1; i < nums.size(); i++)
                    vec.push_back((nums[i - 1] + nums[i]) % 10);
                nums = vec;
            }
            if (nums == hunderd) {
                cout << st << "\n";
                break;
            }
        }
        if (st >= 10000) {
            cout << ":(\n";
        }
    }

    return 0;
}
