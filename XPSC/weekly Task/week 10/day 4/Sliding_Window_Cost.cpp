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
        ll n, k;
        cin >> n >> k;
        vector<ll> x(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        pbds<ll> w;
        vector<ll> costs;

        for (ll i = 0; i < k; i++)
        {
            w.insert(x[i]);
        }

        for (ll i = 0; i <= n - k; i++)
        {
            ll m = *w.find_by_order((k - 1) / 2);
            ll cost = 0;
            for (auto it = w.begin(); it != w.end(); it++)
            {
                cost += abs(*it - m);
            }
            costs.push_back(cost);

            if (i + k < n)
            {
                w.erase(w.find_by_order(w.order_of_key(x[i])));
                w.insert(x[i + k]);
            }
        }

        for (ll cost : costs)
        {
            cout << cost << " ";
        }
        cout << br;
    }
};
signed main()
{
    //  _Created :  28 May 2024 ||   20:38:38
    // _File    :  Sliding_w_Cost.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
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