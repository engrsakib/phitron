#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    void solve()
    {

        int a, b, c, d, S;
        cin >> a >> b >> c >> d >> S;

        // Calculate x
        int x = (a + b + c + d - S) / 4;

        // Calculate l, m, n, o
        int l = a - x;
        int m = b - x;
        int n = c - x;
        int o = d - x;

        // Output results
        cout << "x = " << x << br;
        cout << "l = " << l << br;
        cout << "m = " << m << br;
        cout << "n = " << n << br;
        cout << "o = " << o << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   15:01:43
    // _File    :  233_Easiest_Equation_V2.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}