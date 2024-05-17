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
        ll t;
        cin >> t;
        while (t--)
        {
            ll l, r;
            cin >> l >> r;
            ll even = 0;

            ll i = l;
            while (i <= r)
            {
                if (i % 2 == 0 and i > 2)
                {
                    even = i;
                    break;
                }
                i++;
            }
            // cout << even << br;
            if (r < 4)
            {
                cout << -1 << br;
                continue;
            }

            if (r - l == 0 and even == 0)
            {
                ll div = 0;
                for (int j = 3; j * j <= l; j++)
                {
                    if (l % j == 0)
                    {
                        div = j;
                        break;
                    }
                }
                if (!div)
                {
                    cout << -1 << br;
                }
                else
                {
                    cout << div << " " << l - div << br;
                }
            }
            else
            {
                cout << even - 2 << " " << 2 << br;
            }
        }
    }
};
signed main()
{
    // _Created :  17 May 2024 ||   21:15:26
    // _File    :  C_Non_coprime_Split.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;

    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}