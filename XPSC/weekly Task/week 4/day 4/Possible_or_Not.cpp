#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  08 April 2024 ||   19:43:01
    // _File    :  Possible_or_Not.cpp
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
        ll cur = -1;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll i = 0;
        do
        {
            // cout << v[i] << " ";
            if ((v[i] & m) == m)
            {
                cur &= v[i];
            }
            i++;
        } while (i < n);
        if (cur == m)
            yes;
        else
            no;
    }
    return 0;
}