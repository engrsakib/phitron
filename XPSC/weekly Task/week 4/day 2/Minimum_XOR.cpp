#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  06 April 2024 ||   14:59:39
    // _File    :  Minimum_XOR.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cnt ^= v[i];
        }
        // cout << cnt << br;
        ll ans = cnt;
        for (ll i = 0; i < n; i++)
        {
            ans = min(ans, cnt ^ v[i]);
        }
        cout << ans << br;
    }
    return 0;
}