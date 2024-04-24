#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   02:09:46
    // _File    :  A_Jellyfish_and_Undertale.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        ll sum = 0;
        if (b >= a)
        {
            sum = a;
            b = a;
        }
        else
        {
            sum = b;
        }
        ll i = 0;
        while (i < n)
        {
            cin >> v[i];
            if (v[i] + 1 <= a)
            {
                sum += v[i];
            }
            else
            {
                sum += a - 1;
            }
            i++;
        }
        cout << sum << br;
    }
    return 0;
}