#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  03 April 2024 ||   14:40:16
    // _File    :  C_Ski_Resort.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // for(ll i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // } cout << br;
        ll ans = 0, st = 0;
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                st++;
                if (i == n - 1 or arr[i + 1] > q)
                {
                    if (st >= k)
                    {
                        ll aa = abs(st - k + 1);
                        ans += (aa * (aa + 1)) / 2;
                    }
                    st = 0;
                }
            }
        }
        cout << ans << br;
    }
    return 0;
}