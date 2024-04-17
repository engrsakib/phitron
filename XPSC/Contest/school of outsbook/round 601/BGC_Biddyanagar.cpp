#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  17 April 2024 ||   23:39:16
    // _File    :  BGC_Biddyanagar.cpp
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
        ll i = 0;
        while (i < n)
        {
            cin >> v[i];
            i++;
        }
        sort(v.begin(), v.end());
        ll j = 0;
        while (j < n)
        {
            cout << v[j] << " ";
            j++;
        }
        cout << br;
    }
    return 0;
}