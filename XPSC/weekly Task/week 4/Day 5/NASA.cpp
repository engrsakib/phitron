#include <bits/stdc++.h>
#define nl '\n'
#define int long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> allpali;
    for (int i = 0; i < 32786; i++) {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s) {
            allpali.push_back(i);
        }
    }

    int testcase = 1;
    cin >> testcase;

    while (testcase--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr) {
            cin >> i;
        }

        int ans = 0;
        unordered_map<int, int> mp;
        for (auto i : arr) {
            mp[i]++;
            for (auto j : allpali) {
                ans += mp[j ^ i];
            }
        }
        cout << ans << nl;
    }
    return 0;
}
