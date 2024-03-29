#include <bits/stdc++.h>
#define ll long long
#define br cout << "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  28 March 2024 ||   00:40:07
    // _File    :  Vaccine_Dates.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if (b <= a and a <= c)
            cout << "Take second dose now\n";
        else if (a > c)
            cout << "Too Late\n";
        else if (a <= b)
            cout << "Too Early\n";
    }
    return 0;
}