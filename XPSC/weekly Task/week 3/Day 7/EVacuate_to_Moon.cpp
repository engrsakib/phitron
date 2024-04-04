#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  04 April 2024 ||   17:32:23
    // _File    :  EVacuate_to_Moon.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, p, h;
        cin >> n >> p >> h;
        vector<ll> v(n);
        vector<ll> b(p);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < p; i++)
        {
            cin >> b[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        sort(b.begin(), b.end(), greater<ll>());
        ll ans = 0;
        ll mn = min(p, n);
        for (ll i = 0; i < mn; i++)
        {
            ans += min(v[i], b[i] * h);
        }
        cout << ans << br;
    }
    return 0;
}