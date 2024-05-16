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
        vector<ll>v(150);
        for(ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;
        ll a = v[1];

        ll i = 3;
        while(i <= n)
        {
           a = __gcd(a, v[i]);
            i += 2;
        }
        
        ll fast = 1;
        ll j = 2;
        while(j <= n)
        {
            if(!(v[j] % a))
            {
                fast = 0;
                break;
            }
            j += 2;
        }

        ans = a * fast;
        a = v[2];
        ll k = 4;
        while(k <= n)
        {
            a = __gcd(a, v[k]);
            k += 2;
        }

        fast = 1;
        ll l = 1;
        while(l <= n)
        {
            if(!(v[l] % a))
            {
                fast = 0;
                break;
            }
            l += 2;
        }
        ans = max(ans, a * fast);
        cout << ans << br;

    }
};
signed main()
{
    // _Created :  16 May 2024 ||   20:37:14
    // _File    :  C_Paint_the_Array.cpp
    //Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
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