#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  31 March 2024 ||   14:58:42
    // _File    :  D_Odd_Queries.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n + 1, 0);
        ll prf[n + 1] = {0};
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            prf[i] = prf[i - 1] + arr[i];
        }
        // prf[0] = arr[0];
        // // cout << prf[0] << br;
        // for (ll i = 1; i <= n; i++)
        // {
        //     // cin >> arr[i];
        //     prf[i] = prf[i - 1] + arr[i];
        // }
        // for(ll a : prf)
        // {
        //     cout << a << " ";
        // }
        // cout << br;
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll sum = prf[n];
            sum -= prf[r] - prf[l - 1];
            cout << sum << br;
            sum += ((r - l + 1) * k);
            cout << sum << br;

            if (sum % 2 == 1)
                yes;
            else
                no;
        }
    }
    return 0;
}