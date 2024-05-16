#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const ll N = 2e5 + 5;
class Solution
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        ll MAX = -1e18;
        vector<ll> v(N);
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
            sum += v[i];
            MAX = max(v[i], MAX);
        }
        ll ans;
        ll j = 1;
        while (j <= n)
        {
            ans = __gcd(ans, MAX - v[j]);
            j++;
        }
        cout << (MAX * n - sum) / ans << " " << ans << br;
    }
};
signed main()
{
    // _Created :  16 May 2024 ||   14:14:38
    // _File    :  D_Swords.cpp
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