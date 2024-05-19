#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {
        ll n, m;
        cin >> n >> m;
        multiset<ll> mset;

        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            mset.insert(a);
        }

        ll j = 0;
        while (j < m)
        {
            ll temp;
            cin >> temp;
            auto result = mset.upper_bound(temp);

            if (result != mset.begin())
            {
                cout << *(--result) << br;
                mset.erase(result);
            }
            else
            {
                cout << -1 << br;
            }
            j++;
        }
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   22:20:06
    // _File    :  Concert_Tickets.cpp
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