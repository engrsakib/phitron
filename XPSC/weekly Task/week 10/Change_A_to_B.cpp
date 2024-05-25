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
        ll x, y, K;
        cin >> x >> y >> K;

        ll result = 0;
        while (1)
        {
            if (y % K == 0 and y / K >= x)
            {
                result++;
                y = y / K;
            }
            else if (y % K == 0)
            {
                result += y - x;
                break;
            }
            else
            {
                result += y % K;
                y -= y % K;
            }
        }
        cout << result << br;
    }
};
signed main()
{
    // _Created :  22 May 2024 ||   22:01:29
    // _File    :  Change_A_to_B.cpp
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