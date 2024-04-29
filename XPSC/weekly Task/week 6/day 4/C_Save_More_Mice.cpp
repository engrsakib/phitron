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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        ll cat = 0;
        ll total = 0;
        for (int i = 0; i < k; i++)
        {
            if (cat < a[i])
            {
                cat += (n - a[i]);
                total++;
            }
            else
            {
                break;
            }
        }
        cout << total << br;
    }
};
int main()
{
    // _Created :  29 April 2024 ||   18:35:09
    // _File    :  C_Save_More_Mice.cpp
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