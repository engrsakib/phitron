#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  17 April 2024 ||   19:41:59
    // _File    :  B_Roof_Construction.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k = 0;
        cin >> n;

        while ((1 << (k + 1)) <= n - 1)
        {
            k++;
        }
        // cout << k << br;
        ll i = (1 << k) - 1;
        while (i >= 0)
        {
            cout << i << ' ';
            i--;
        }
        ll j = (1 << k);
        while (j < n)
        {
            cout << j << ' ';
            j++;
        }
        cout << br;
    }
    return 0;
}