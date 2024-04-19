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
    int l, r;

    while (cin >> l >> r)
    {
        int sum = 0;
        for (l; l <= r; l++)
        {
            if (l % 2 == 1)
                sum += l;
        }
        cout << sum << br;
    }
    return 0;
}