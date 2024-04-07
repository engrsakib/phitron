#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  06 April 2024 ||   19:18:56
    // _File    :  Playing_with_OR.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        ll arr[n + 1] = {0};
        ll prf[n + 1] = {0};
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
            {
                prf[i] = 1;
            }
            prf[i] += prf[i - 1];
        }
        for (ll i = 1; i + m - 1 <= n; i++)
        {
            // cout << i + m - 1 << " ";
            // cout << prf[i + m - 1] << " ";
            // cout << prf[i - 1] << " ";
            // cout << prf[i + m - 1] - prf[i - 1] << " ";
            if (prf[i + m - 1] - prf[i - 1] > 0)
            {
                ans++;
            }
        }
        cout << ans << br;
    }
    return 0;
}