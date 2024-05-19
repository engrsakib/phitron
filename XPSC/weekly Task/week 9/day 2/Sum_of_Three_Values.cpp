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
        ll n, x;
        cin >> n >> x;

        vector<pair<ll, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }

        sort(v.begin(), v.end());

        // for(auto a : v)
        // {
        //     cout << a.first << " " << a.second << br;
        // }
        vector<ll> ans;

        ll i = 0;
        while (i < n)
        {
            ll xx = x - v[i].first;
            for (ll j = i + 1, k = n - 1; j < k; j++)
            {
                while (v[j].first + v[k].first > xx)
                {
                    k--;
                }
                if (j < k and v[j].first + v[k].first == xx)
                {
                    cout << v[i].second << " " << v[j].second << " " << v[k].second << br;
                    return;
                }
            }
            i++;
        }

        cout << "IMPOSSIBLE" << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   20:54:13
    // _File    :  Sum_of_Three_Values.cpp
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