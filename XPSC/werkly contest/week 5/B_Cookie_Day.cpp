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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        ll ans = 1e18;

        for (ll i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                ll rem = arr[i] % k;
                ans = min(ans, rem);
            }
        }
        
        if (ans != 1e18)
        {
            cout << ans << br;
        }
        else
        {
            cout << -1 << br;
        }
    }
};
int main()
{
    // _Created :  29 April 2024 ||   23:09:10
    // _File    :  B_Cookie_Day.cpp
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