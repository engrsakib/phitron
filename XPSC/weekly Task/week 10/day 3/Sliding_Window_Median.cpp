#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

using namespace std;
using namespace __gnu_pbds;
template <typename T> // less -> set and less_equal -> multi_set
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back(x);
        }

        int l = 0, r = 0;
        pbds<pair<int, int>> pbd;
        while (r < n)
        {
            pbd.insert({a[r], r});
            if (r - l + 1 == k)
            {
                int pos = k / 2;
                if (k % 2 == 0)
                {
                    pos--;
                }
                auto it = pbd.find_by_order(pos);
                cout << it->first << " ";
                pbd.erase({a[l], l});
                l++;
            }
            r++;
        }
        cout << br;
    }
};
signed main()
{
    //  _Created :  27 May 2024 ||   23:25:38
    // _File    :  Sliding_Window_Median.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}