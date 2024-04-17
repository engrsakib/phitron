#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int N = 1e2 + 10;
int main()
{
    // _Created :  17 April 2024 ||   20:13:07
    // _File    :  A_Mocha_and_Math.cpp
    // Writer    :  Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int a[N];
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll rest = a[1];
        ll j = 2;
        while (j <= n)
        {
            rest &= a[j];
            j++;
        }
        cout << rest << br;
    }
    return 0;
}