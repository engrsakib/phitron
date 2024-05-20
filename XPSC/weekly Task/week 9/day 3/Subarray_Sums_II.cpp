#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int N = 2e6 + 5;
class Solution
{
public:
    void solve()
    {
        map<ll, ll> mp;
        ll n, x, ans = 0;

        cin >> n >> x;
        vector<ll> sum;

        sum.push_back(0);
        mp[0]++;

        ll i = 0;
        while (i < n)
        {
            ll a;
            cin >> a;
            sum.push_back(sum[i] + a);
            mp[sum[i] + a]++;
            i++;
        }

        ll j = 0;
        while (j < n)
        {
            mp[sum[j]]--;
            ans += mp[sum[j] + x];
            j++;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   23:59:42
    // _File    :  Subarray_Sums_II.cpp
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