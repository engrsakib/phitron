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
        ll nb;
        ll ns;
        ll nc;
        ll pb;
        ll ps;
        ll pc;
        ll taka;
        string str;
        cin >> str;
        cin >> nb >> ns >> nc;
        cin >> pb >> ps >> pc;
        cin >> taka;

        ll b = 0;
        ll s = 0;
        ll c = 0;

        int i = 0;
        while (i < str.size())
        {
            if (str[i] == 'B')
            {
                b++;
            }
            else if (str[i] == 'S')
            {
                s++;
            }
            else if (str[i] == 'C')
            {
                c++;
            }
            i++;
        }

        ll l = 0;
        ll h = 1e15;
        ll ans = 0;
        ll Zero = 0;
        while (l <= h)
        {
            ll mid = (l + h) / 2;

            ll x = max(Zero, b * mid - nb);
            ll y = max(Zero, s * mid - ns);
            ll z = max(Zero, c * mid - nc);

            ll costr = pb * x + ps * y + pc * z;

            if (costr > taka)
            {
                h = mid - 1;
            }
            else
            {
                ans = mid;
                l = mid + 1;
            }
        }
        cout << ans << br;
    }
};
int main()
{
    // _Created :  01 May 2024 ||   20:07:19
    // _File    :  H_Hamburgers.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from strDIN. Print output to strDOUT */
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