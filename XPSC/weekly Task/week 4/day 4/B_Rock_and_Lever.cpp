#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  08 April 2024 ||   23:21:17
    // _File    :  B_Rock_and_Lever.cpp
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
        ll ans = 0;
        ll i = 30;
        while (i >= 0)
        {
            ll cnt = 0;
            ll j = 0;
            do
            {
                if (v[j] >= pow(2, i) and v[j] < pow(2, (i + 1)))
                    cnt++;
                j++;
            } while (j < n);
            ans += (cnt * (cnt - 1)) / 2;
            i--;
        }
        cout << ans << br;
    }
    return 0;
}