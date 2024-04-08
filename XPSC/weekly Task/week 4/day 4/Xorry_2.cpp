#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  08 April 2024 ||   19:20:23
    // _File    :  Xorry_2.cpp
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
        ll cnt = 0;
        ll sum = 0;
        ll sum_F;
        while (n)
        {
            // cout << (n & 1) << br;
            if ((n & 1) == 0)
            {
                cnt++;
                sum++;
            }
            else if ((n & 1) == 1)
            {
                sum_F = sum;
                sum = 0;
            }
            n >>= 1;
        }
        ll Xorry = pow(2, cnt - sum_F);
        cout << Xorry << br;
    }
    return 0;
}