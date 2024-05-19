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
        int sum_XY, n;
        cin >> sum_XY >> n;

        // Calculate X and Y
        double X = (sum_XY + n) / 2.0;
        double Y = (sum_XY - n) / 2.0;

        // Calculate division and multiplication
        double division = X / Y;
        double multiplication = X * Y;

        // Output results rounded to two decimal places
        cout << fixed << setprecision(2);
        cout << division << endl;
        cout << multiplication << endl;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   14:36:30
    // _File    :  232_Easiest_Equation_V1.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}