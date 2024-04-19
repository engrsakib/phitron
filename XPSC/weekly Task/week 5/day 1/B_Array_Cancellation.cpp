#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  19 April 2024 ||   20:52:28
    // _File    :  B_Array_Cancellation.cpp
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
        ll pos = 0, neg = 0;
        for (ll x : v)
        {
            if (x >= 0)
            {
                pos += x;
            }
            else
            {
                if (pos + x >= 0)
                {
                    pos += x;
                }
                else
                {
                    x += pos;
                    pos = 0;
                    neg += x;
                }
            }
        }
        cout << pos << br;
    }
    return 0;
}