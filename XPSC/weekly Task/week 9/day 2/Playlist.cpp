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
        ll MAX = -1e18;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            MAX = max(MAX, v[i]);
        }
        map<ll, ll> count;
        ll ans = -1e18;
        ll r = 0, l = 0;
        while (l < n)
        {
            while (count[v[r]] == 0 and r < n)
            {
                count[v[r]]++;
                ans = max(ans, r - l + 1);
                r++;
            }
            count[v[l]]--;
            l++;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   01:14:51
    // _File    :  Playlist.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}