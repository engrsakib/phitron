#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   20:46:40
    // _File    :  Dice_Deception.cpp
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
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (ll i = 0; i < k; i++)
        {
            if (v[i] == 1) v[i] = 6;
            if (v[i] == 2) v[i] = 5;
            if (v[i] == 3) v[i] = 4;
        }
        ans = accumulate(v.begin(), v.end(), 0LL);
        // for (ll i = 0; i < n; i++)
        // {
        //     ll a = v[i];
        //     if (a == 1 or a == 2 or a == 3)
        //     {
        //         if (k > 0)
        //             k--, ans += abs(7 - 1);
        //     }
        //     else
        //         ans += a;
        // }
        cout << ans << br;
    }
    return 0;
}