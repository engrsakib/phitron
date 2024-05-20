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
        map<ll, ll> mp;
        ll n, sum = 0, ans = 0;
        cin >> n;
        mp[sum]++;

        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            sum += a;

            sum %= n;

            if (sum < 0)
            {
                sum += n;
            }
            ans += mp[sum];
            mp[sum]++;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   16:34:02
    // _File    :  Subarray_Divisibility.cpp
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