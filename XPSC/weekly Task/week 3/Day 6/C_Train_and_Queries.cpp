#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  03 April 2024 ||   17:32:00
    // _File    :  C_Train_and_Queries.cpp
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
        map<ll, vector<ll>> mp;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            mp[a].push_back(i);
        }
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            if (mp[l].empty() or mp[r].empty())
            {
                no;
            }
            else if (mp[l][0] < mp[r].back())
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
    return 0;
}