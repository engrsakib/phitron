#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
class Solution
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> ans(n, -1);
        // memset(ans, -1, sizeof(ans));

        ll cur_col = 1;
        for (auto p : prime)
        {
            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                if (ans[i] != -1)
                {
                    continue;
                }
                if (v[i] % p != 0)
                {
                    continue;
                }
                flag = true;
                ans[i] = cur_col;
            }
            if (flag)
            {
                cur_col++;
            }
        }
        cout << cur_col - 1 << br;
        for (auto aa : ans)
        {
            cout << aa << " ";
        }
        cout << br;
    }
};
signed main()
{
    // _Created :  16 May 2024 ||   21:57:43
    // _File    :  B_Composite_Coloring.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}