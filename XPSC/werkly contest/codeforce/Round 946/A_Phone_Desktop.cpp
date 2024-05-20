#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const ll Screen_3x5 = 3 * 5;
class Solution
{
public:
    void solve()
    {
        ll x, y;
        cin >> x >> y;

        ll screen = (y + 1) / 2;

        ll con = y * 4;
        ll tt = screen * Screen_3x5;

        ll rig_c = tt - con;

        ll rr = max((ll)0, x - rig_c);

        ll ss = (rr + 14) / Screen_3x5;

        cout << screen + ss << br;
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   20:36:30
    // _File    :  A_Phone_Desktop.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
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