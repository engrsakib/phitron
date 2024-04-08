#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  07 April 2024 ||   22:42:04
    // _File    :  Xorry_1.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll y = x;
        ll cnt = 0;
        while (x > 1)
        {
            x /= 2;
            cnt++;
        }
        ll tmp = pow(2, cnt);
        cout << y - tmp << " " << tmp << br;
    }
    return 0;
}