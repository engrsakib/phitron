#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  07 April 2024 ||   15:48:25
    // _File    :  A_We_Need_the_Zero.cpp
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
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            x ^= v[i];
        }
        // cout << x << br;
        for (ll i = 0; i < n; i++)
        {
            v[i] ^= x;
        }
        // for(ll i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // } cout << br;
        ll y = 0;
        for (ll i = 0; i < n; i++)
        {
            y ^= v[i];
        }
        // cout << y << br;
        if (y != 0)
            cout << -1 << br;
        else
            cout << x << br;
        v.clear();
    }
    return 0;
}