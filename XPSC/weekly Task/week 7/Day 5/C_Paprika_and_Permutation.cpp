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
        vector<ll> ar(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        vector<ll> v;
        map<ll, ll> mp1;
        for (auto it : mp)
        {
            ll x = it.first;
            ll y = it.second;
            if (x <= n)
            {
                for (ll i = 1; i < y; i++)
                {
                    v.push_back(x);
                }
                mp1[x] = 1;
            }
            else
            {
                for (ll i = 1; i <= y; i++)
                {
                    v.push_back(x);
                }
            }
        }

        ll cnt = 1;
        ll ans = 0;
        ll i = 0;

        while (i < v.size())
        {
            ll j = cnt;
            while (j <= n)
            {
                if (mp1[j] == 1)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
                j++;
            }

            ll z = (v[i] - 1) / 2;
            if (cnt <= z)
            {
                cnt++;
                ans++;
            }
            else
            {
                ans = -1;
                break;
            }
            i++;
        }
        cout << ans << endl;
    }
};
int main()
{
    // _Created :  07 May 2024 ||   21:01:10
    // _File    :  C_Paprika_and_Permutation.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
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