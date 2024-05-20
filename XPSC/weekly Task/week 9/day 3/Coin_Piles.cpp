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
        ll a, b;
        cin >> a >> b;
        if (a * 2 < b or a > b * 2)
        {
            no;
        }
        else
        {
            if ((a + b) % 3 == 0)
            {
                yes;
            }
            else
            {
                no;
            }
        }
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   17:37:29
    // _File    :  Coin_Piles.cpp
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