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
        double x, w, l, h;
        cin >> x >> w >> l >> h;
        double ans = w * l * h * x * 1000;
        cout << fixed << setprecision(2) << ans << " kg" << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   15:37:03
    // _File    :  256_Wind_Weight.cpp
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