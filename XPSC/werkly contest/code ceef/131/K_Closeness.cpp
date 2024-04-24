#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   21:48:27
    // _File    :  K_Closeness.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] = v[i] % k;
        }
        sort(v.begin(), v.end());
        ll d = v[n - 1] - v[0];
        for (ll i = 0; i < n - 1; i++)
        {
            d = min(d, v[i] + k - v[i + 1]);
        }
        cout << d << br;
    }
    return 0;
}