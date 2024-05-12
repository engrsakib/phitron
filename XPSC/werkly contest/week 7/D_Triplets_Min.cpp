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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        vector<ll> cnt(n - 2);
        ll i = 0;
        while (i < n - 2)
        {
            ll x = n - i - 1;
            cnt[i] = (x * (x - 1)) / 2;
            i++;
        }

        ll j = 1;
        while (j < n - 2)
        {
            cnt[j] += cnt[j - 1];
            j++;
        }

        while (q--)
        {
            ll k;
            cin >> k;

            int p = lower_bound(cnt.begin(), cnt.end(), k) - cnt.begin();

            cout << v[p] << br;
        }
    }
};
int main()
{
    // _Created :  12 May 2024 ||   21:47:09
    // _File    :  D_Triplets_Min.cpp
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