#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  22 April 2024 ||   21:04:45
    // _File    :  A_Two_Elevators.cpp
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
        ll ans_L = abs(a - 1);
        int ans_R = abs(b - c) + (c - 1);

        if (ans_R == ans_L)
        {
            cout << 3 << endl;
        }
        else if (ans_R > ans_L)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}