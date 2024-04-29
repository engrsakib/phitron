#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    bool Possible(vector<ll> a, ll n, ll k)
    {
        multiset<ll> s;
        for (auto i : a)
        {
            s.insert(i);
        }

        for (ll i = 1; i <= k; i++)
        {
            if (s.empty())
            {
                return false;
            }

            ll req = k - i + 1;
            auto it = s.upper_bound(req);
            if (it == s.begin())
            {
                return false;
            }
            it--;

            s.erase(it);
            if (!s.empty())
            {
                it = s.begin();
                ll v = (*it);
                v += (req);
                s.erase(it);
                s.insert(v);
            }
        }
        return true;
    }

    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll k;
        ll low = 0;
        ll high = n;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            if (Possible(a, n, mid))
            {
                k = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << k << br;
    }
};
int main()
{
    // _Created :  29 April 2024 ||   22:11:20
    // _File    :  C_Number_Game.cpp
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