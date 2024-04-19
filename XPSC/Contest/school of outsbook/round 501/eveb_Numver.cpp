#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   12:34:04
    // _File    :  odd_Number.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while (cin >> n)
    {
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << br;
            else
                continue;
        }
    }

    return 0;
}