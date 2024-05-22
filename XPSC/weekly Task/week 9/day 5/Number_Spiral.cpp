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
        ll x, y;
        cin >> x >> y;
        ll Max = max(y, x);

        if (Max % 2 == 0)
        {
            swap(x, y);
        }

        if (Max == y)
        {
            cout << (Max * Max) - x + 1 << br;
        }
        else
        {
            cout << (Max - 1) * (Max - 1) + y << br;
        }
    }
};
signed main()
{
    // _Created :  22 May 2024 ||   14:58:38
    // _File    :  Number_Spiral.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}