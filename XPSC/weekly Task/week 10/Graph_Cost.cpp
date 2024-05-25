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
        ll n, l = 0, r;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        ll j = 1;
        while (j < n)
        {
            if (a[j] <= a[l])
            {
                ans += a[l] * 1LL * (j - l);
                l = j;
            }
            j++;
        }
        r = n - 1;

        ll k = n - 2;
        while (k >= l)
        {
            if (a[k] <= a[r])
            {
                ans += a[r] * 1LL * (r - k);
                r = k;
            }
            k--;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  25 May 2024 ||   13:36:49
    // _File    :  Graph_Cost.cpp
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