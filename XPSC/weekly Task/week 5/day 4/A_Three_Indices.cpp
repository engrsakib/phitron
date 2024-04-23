#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  22 April 2024 ||   21:38:36
    // _File    :  A_Three_Indices.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
head:
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        ll i = 2;
        bool found = false;
        while (i <= n - 1)
        {
            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
                cout << "YES" << endl;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                found = true;
                break;
            }
            i++;
        }
        if (!found)
            cout << "NO" << endl;
    }
    return 0;
}