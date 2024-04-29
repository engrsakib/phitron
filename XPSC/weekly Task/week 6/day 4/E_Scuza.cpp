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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        vector<ll> pref(n + 2, 0);
        for (ll i = 1; i <= n; i++)
        {
            pref[i] = (v[i] + pref[i - 1]);
        }

        vector<ll> ans(q);
        vector<pair<ll, ll>> k(q);
        for (ll i = 0; i < q; i++)
        {
            cin >> k[i].first;
            k[i].second = i;
        }

        sort(k.begin(), k.end());
        int sizuka = 0;

        for (int i = 0; i < q; i++)
        {
            while (sizuka < n && v.at(sizuka + 1) <= k[i].first) 
            {
                sizuka++;
            }
            ans[k[i].second] = pref[sizuka];
        }

        for (int i = 0; i < q; i++)
        {
            cout << ans[i] << " ";
        }
        cout << br;
    }
};
int main()
{
    // _Created :  29 April 2024 ||   20:00:58
    // _File    :  E_Scuza.cpp
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