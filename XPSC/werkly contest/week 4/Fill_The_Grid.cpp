#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  24 April 2024 ||   01:16:00
    // _File    :  Fill_The_Grid.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if ((n % 2 == 0) && (m % 2 == 0))
        {
            cout << "0" << br;
        }
        else if (n % 2 == 1 && m % 2 == 1)
        {
            cout << n + m - 1 << br;
        }
        else if (n % 2 == 0)
        {
            cout << n << br;
        }
        else
            cout << m << br;
    }
    return 0;
}