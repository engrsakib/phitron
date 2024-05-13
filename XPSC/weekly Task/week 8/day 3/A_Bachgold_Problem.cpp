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
        ll ans = 0;
        if (n % 2 == 0)
        {
            ans = n / 2;
            cout << ans << br;
            ll i = 0;
            while (i < ans)
            {
                cout << 2 << " ";
                i++;
            }
            cout << br;
        }
        else
        {
            n -= 3;
            ans = n / 2;
            cout << ans + 1 << br;
            ll i = 0;
            while (i < ans)
            {
                cout << 2 << " ";
                i++;
            }
            cout << 3 << br;
        }
    }
};
int main()
{
    // _Created :  13 May 2024 ||   22:08:41
    // _File    :  A_Bachgold_Problem.cpp
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