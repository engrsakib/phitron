#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int N = 2e8 + 5;
class Solution
{
public:
    void solve()
    {
        vector<ll> v(N);
        ll sum[N];
        ll n, x;
        cin >> n >> x;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum[i + 1] = sum[i] + v[i];
        }
        ll ans = 0;
        ll j = 0;
        while (j < n)
        {
            ll left = lower_bound(sum, sum + n + 1, sum[j] + x) - sum;
            ll right = upper_bound(sum, sum + n + 1, sum[j] + x) - sum;
            ans += abs(left - right);
            j++;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   23:42:09
    // _File    :  Subarray_Sums_I.cpp
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