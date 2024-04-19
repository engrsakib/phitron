#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   12:53:52
    // _File    :  add_odd.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, r;

    while (cin >> l >> r)
    {
        ll sum = 0;
        for (int i = l; i <= r; i++)
        {
            if (i % 2 == 0)
                sum += i;
        }
        cout << sum << br;
    }
    return 0;
}