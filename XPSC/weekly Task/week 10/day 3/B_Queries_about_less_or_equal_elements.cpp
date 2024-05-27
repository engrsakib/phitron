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
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution
{
public:
    void solve()
    {
        ll n, m;
        cin >> n >> m;
        pbds<ll> p;

        for (ll i = 1; i <= n; i++)
        {
            ll a;
            cin >> a;
            p.insert(a);
        }

        for (ll i = 1; i <= m; i++)
        {
            ll a;
            cin >> a;
            cout << p.order_of_key(a + 1) << " ";
        }
        cout << br;
    }
};
signed main()
{
    //  _Created :  27 May 2024 ||   19:42:02
    // _File    :  B_Queries_about_less_or_equal_elements.cpp
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