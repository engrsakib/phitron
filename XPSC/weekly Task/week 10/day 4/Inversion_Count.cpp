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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        pbds<ll> p;

        ll i = n - 1;
        while (i >= 0)
        {
            ans += p.order_of_key(v[i]);
            p.insert(v[i]);
            i--;
        }
        cout << ans << br;
    }
};
signed main()
{
    //  _Created :  28 May 2024 ||   20:03:56
    // _File    :  Inversion_Count.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}