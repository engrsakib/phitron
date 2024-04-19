#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  19 April 2024 ||   09:47:51
    // _File    :  E_Negatives_and_Positives.cpp
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
        ll negative = 0;
        ll ans = 0;
        ll min_sz = LLONG_MAX;
        int i = 0;
        while (i < n)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                negative++;
            }
            ans += abs(v[i]);
            min_sz = min(min_sz, abs(v[i]));
            i++;
        }
        if (negative % 2 == 1)
            ans -= (2 * min_sz);
        cout << ans << br;
    }
    return 0;
}