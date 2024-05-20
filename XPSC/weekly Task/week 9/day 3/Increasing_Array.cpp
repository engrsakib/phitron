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
        ll n;
        cin >> n;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;

        ll j = 0;
        while (j < n - 1)
        {
            if (v[j] > v[j + 1])
            {
                ll x = (v[j] - v[j + 1]);
                v[j + 1] += x;
                ans += x;
            }
            j++;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   23:13:42
    // _File    :  Increasing_Array.cpp
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