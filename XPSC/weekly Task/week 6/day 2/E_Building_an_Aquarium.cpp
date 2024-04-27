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
        ll a_water;

        cin >> n >> a_water;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll l = 1;
        ll r = 1e10;
        while (l < r - 1)
        {

            ll t_water = 0;
            ll mid = l + (r - l) / 2;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] < mid)
                {
                    t_water += (mid - v[i]);
                }
            }
            if (t_water > a_water)
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << l << endl;
    }
};
int main()
{
    // _Created :  27 April 2024 ||   21:34:09
    // _File    :  E_Building_an_Aquarium.cpp
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