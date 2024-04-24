#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int M = 1e9 + 7;
int main()
{
    // _Created :  24 April 2024 ||   21:23:52
    // _File    :  Encrypt_Value.cpp
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
        sort(v.begin(), v.end());
        ll ans = v[0];
        for (ll i = 1; i < n; i++)
        {
            if (v[i] == 1 || v[i] == 0 || (ans <= 1 and v[i] > 1))
            {
                ans = (ans + v[i]) % M;
            }
            else
            {
                ans = (ans * v[i]) % M;
            }
        }
        cout << ans << br;
    }
    return 0;
}