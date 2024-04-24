#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   01:25:42
    // _File    :  G_1_Teleporters_Easy_Version.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += (i + 1);
        }
        sort(v.begin(), v.end());

        ll ans = 0;
        ll sum = 0;

        ll i = 0;
        while (i < n)
        {
            if (sum + v[i] > c)
                break;
            else
                sum += v[i];
            ans++;
            i++;
        }
        cout << ans << br;
    }

    return 0;
}