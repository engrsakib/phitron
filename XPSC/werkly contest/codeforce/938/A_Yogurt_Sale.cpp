#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  08 April 2024 ||   20:52:43
    // _File    :  A_Yogurt_Sale.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x, z;
        cin >> n >> x >> z;
        ll sum = (z + 1) / 2;
        if (sum > x)
            cout << n * x << br;
        else
        {
            if (n % 2 == 0)

                cout << (n / 2) * z << br;
            else
                cout << ((n / 2) * z) + x << br;
        }
    }
    return 0;
}