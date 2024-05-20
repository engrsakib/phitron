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
        ll n;
        cin >> n;
        if (n >= 2 and 4 > n)
        {
            cout << "NO SOLUTION\n";
        }
        else
        {
            ll i = n - 1;

            while (i > 0)
            {
                cout << i << " ";
                i -= 2;
            }

            ll j = n;
            while (j > 0)
            {
                cout << j << " ";
                j -= 2;
            }
        }
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   16:50:35
    // _File    :  Permutations.cpp
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