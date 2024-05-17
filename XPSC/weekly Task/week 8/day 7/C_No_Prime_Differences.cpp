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
        ll n, m;
        cin >> n >> m;

        if (m % 2 == 0)
        {
            ll i = 1;
            while (i <= n)
            {
                ll j = 1;
                while (j <= m)
                {
                    cout << ((i - 1) * m + j) << " ";
                    j++;
                }
                cout << br;
                i++;
            }
        }
        else if (n % 2 == 0)
        {
            ll i = 1;
            while (i <= n)
            {
                ll j = 1;
                while (j <= m)
                {
                    cout << ((i + (j - 1) * n)) << " ";
                    j++;
                }
                cout << br;
                i++;
            }
        }
        else
        {
            ll i = 1;
            while (i <= n)
            {
                ll operation = (i - 1) % m + 1;
                ll j = operation;
                while (j <= m)
                {
                    cout << ((i - 1) * m + j) << " ";
                    j++;
                }
                ll k = 1;
                while (k < operation)
                {
                    cout << ((i - 1) * m + j) << " ";
                    k++;
                }
                cout << br;
                i++;
            }
        }
        cout << br;
    }
};
signed main()
{
    // _Created :  17 May 2024 ||   22:41:01
    // _File    :  C_No_Prime_Differences.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}