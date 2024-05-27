#include <bits/stdc++.h>
#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    ll gcd(ll a, ll b)
    {
        while (b != 0)
        {
            ll temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    ll lcm(ll a, ll b)
    {
        return (a / gcd(a, b)) * b;
    }

    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        unordered_set<ll> elem_set;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            elem_set.insert(a[i]);
        }

        ll max_length = 0;

        ll subsets = 1 << n;
        for (ll mask = 1; mask < subsets; mask++)
        {
            vector<ll> subset;
            for (ll i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    subset.push_back(a[i]);
                }
            }

            ll curr_lcm = subset[0];
            bool valid_lcm = true;
            for (ll j = 1; j < subset.size(); j++)
            {
                curr_lcm = lcm(curr_lcm, subset[j]);
                if (curr_lcm > 10000000000LL)
                {
                    valid_lcm = false;
                    break;
                }
            }

            if (valid_lcm && elem_set.find(curr_lcm) == elem_set.end())
            {
                max_length = max(max_length, static_cast<ll>(subset.size()));
            }
        }

        cout << max_length << br;
    }
};

signed main()
{
    // _Created :  26 May 2024 ||   21:35:41
    // _File    :  C_Nikita_and_LCM.cpp
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
