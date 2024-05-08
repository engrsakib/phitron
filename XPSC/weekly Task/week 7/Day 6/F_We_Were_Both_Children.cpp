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
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll freq[n + 2];
        memset(freq, 0, sizeof(freq));
       
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] > n)
            {
                continue;
            }
            freq[arr[i]]++;
        }

        ll ans = -1e18;
        ll i = 1;
        while ( i <= n)
        {
            ll children = 0;
            ll j = 1;
            while ( j * j <= i)
            {
                if (i % j == 0)
                {
                    children += freq[j];
                    if (j * j != i)
                    {
                        children += freq[i / j];
                    }
                }
                j++;
            }
            ans = max(ans, children);
            i++;
        }

        cout << ans << br;
    }
};
int main()
{
    // _Created :  08 May 2024 ||   18:19:42
    // _File    :  F_We_Were_Both_children.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code children. Read input from STDIN. Prll output to STDOUT */
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