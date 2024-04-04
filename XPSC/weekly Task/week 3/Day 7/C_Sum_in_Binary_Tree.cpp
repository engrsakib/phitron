#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  04 April 2024 ||   01:05:33
    // _File    :  C_Sum_in_Binary_Tree.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    while (n--)
    {
        ll sum = 0;
        ll a;
        cin >> a;
        while (a > 0)
        {
            sum += a;
            a = a / 2;
        }
        cout << sum << br;
    }

    return 0;
}