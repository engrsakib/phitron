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
        ll x;
        cin >> x;
        vector<ll> lcm;
        ll i = 2;
        while (i * i <= x)
        {
            if (x % i == 0)
            {
                ll cur = 1;
                while (x % i == 0)
                {
                    x /= i;
                    cur *= i;
                }
                lcm.push_back(cur);
            }
            i++;
        }

        if (x > 1)
        {
            lcm.push_back(x);
        }
        ll n = lcm.size();
        ll ans_A = 1e18;
        ll ans_B = 1e18;

        ll k = 0;
        while (k < (1 << n))
        {
            ll a = 1;
            ll b = 1;

            ll j = 0;
            while (j < n)
            {
                if ((k >> j) & 1)
                {
                    a *= lcm[j];
                }
                else
                {
                    b *= lcm[j];
                }
                j++;
            }

            if (max(a, b) < max(ans_A, ans_B))
            {
                ans_A = a;
                ans_B = b;
            }
            k++;
        }
        cout << ans_A << " " << ans_B << br;
    }
};
int main()
{
    // _Created :  15 May 2024 ||   00:56:58
    // _File    :  C_Fadi_and_LCM.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //  cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}