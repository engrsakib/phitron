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
        ll m, p, c, d;
        cin >> m >> p >> c >> d;
        ll day = (p * c + d) / (m - p);
        ll area = day * m;
        cout << day << " " << area << endl;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   22:57:33
    // _File    :  221 - Farming.cpp
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