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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> b;
        ll qry;
        for (int i = 0; i < q; i++)
        {
            cin >> qry;
            if (b.empty() or b.back() > qry)
            {
                b.push_back(qry);
            }
        }
        int i = 0;
        while (i < n)
        {
            for (auto it : b)
            {
                if (v[i] % (1 << it) == 0)
                {
                    it = it - 1;
                    v[i] += (1 << it);
                }
            }
            i++;
        }
        for (auto vv : v)
        {
            cout << vv << " ";
        }
        cout << br;
    }
};
int main()
{
    // _Created :  09 May 2024 ||   03:25:09
    // _File    :  B_Deja_Vu.cpp
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