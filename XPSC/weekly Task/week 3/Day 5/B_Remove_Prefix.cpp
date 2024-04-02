#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  02 April 2024 ||   17:42:53
    // _File    :  B_Remove_Prefix.cpp
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
        ll vis = 0;
        set<ll> s;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (vis > s.size())
            {
                break;
            }
            else
            {
                s.insert(v[i]);
                vis++;
            }
        }
        cout << n - s.size() << br;
    }
    return 0;
}