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
        int X, Y;
        cin >> X >> Y;

        
        int x = X % 3;
        int y = Y % 3;

        
        int min_draws = max(x, y);

        cout << min_draws << endl;
    }
};
signed main()
{
    // _Created :  22 May 2024 ||   20:32:17
    // _File    :  Football_Ties.cpp
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