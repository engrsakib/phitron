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
        map<ll, ll> mp;
        ll mx = -1e18;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            if (v[i] != 1)
            {
                mx = max(mx, mp[v[i]]);
            }
        }

        if (n == 1)
        {
            cout << 1 << br;
            return;
        }
        ll i = 0;
        while (i < n)
        {
            ll j = 2;
            while (j < sqrt(v[i]))
            {
                if (v[i] % j == 0)
                {
                    mp[j]++;
                    mx = max(mx, mp[j]);
                    if (v[i] / j != j)
                    {
                        mp[v[i] / j]++;
                        mx = max(mx, mp[v[i] / j]);
                    }
                }
                j++;
            }
            i++;
        }
        cout << mx + 1 << br;
    }
};
int main()
{
    // _Created :  15 May 2024 ||   18:07:34
    // _File    :  B_Bash_s_Big_Day.cpp
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