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

        double L;

        cin >> L;

        double W = L * 6 / 10;

        double R = L * 1 / 5;

        double X = L * 9 / 20;
        double Y = W / 2;

        // Output the results
        cout << "L = " << L << br;
        cout << "W =  " << W << br;
        cout << "R = " << R << br;
        cout << fixed << setprecision(1);
        cout << "(X, Y) = (" << X << ", " << Y << ")" << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   19:41:57
    // _File    :  249_The national_flag_of_Bangladesh.cpp
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