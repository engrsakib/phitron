#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

int main()
{
    // _Created :  18 April 2024 ||   17:20:49
    // _File    :  Challenge.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int d, r, p;
        cin >> d >> r >> p;
        if (d * p >= r)
            cout << "Case " << i << ": Yes\n";
        else
            cout << "Case " << i << ": No\n";
    }
    return 0;
}