#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  23 April 2024 ||   17:30:48
    // _File    :  C_Assembly_via_Minimums.cpp
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
        ll m = (n * (n - 1)) / 2;
        vector<ll> a(n);
        vector<ll> b(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        ll x = 1, index = 0;
        ll from_B_to_A = n - x;
        while (n - x > 0)
        {
            a[index++] = b[from_B_to_A - 1];
            x++;
            from_B_to_A += n - x;
        }
        a[n - 1] = 1e9;
        for (ll aa : a)
        {
            cout << aa << " ";
        }
        cout << br;
    }
    return 0;
}