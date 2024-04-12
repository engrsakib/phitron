#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  09 April 2024 ||   16:43:06
    // _File    :  Boxes.cpp
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
        ll large = INT32_MIN;
        ll i = 0;
        while (i < n)
        {
            large = max(large, v[i]);
            i++;
        }
        // cout << large << br;
        ll j = 0;
        while (large > 0)
        {
            large /= 2;
            j++;
        }
        // cout << j << br;
        ll power = pow(2, j - 1);
        // cout << power << br;
        ll cnt = 0;
        ll k = 0;
        while (k < n)
        {
            if (v[k] >= power)
            {
                cnt++;
            }
            k++;
        }
        if (cnt % 2 == 1)
            cout << (cnt / 2) + 1 << br;
        else
            cout << cnt / 2 << br;
    }
    return 0;
}