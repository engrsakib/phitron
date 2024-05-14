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
        ll l, r;
        cin >> l >> r;
        yes;
        ll i = l;
        while (i < r + 1)
        {
            cout << i << ' ' << i + 1 << br;
            i += 2;
        }
    }
};
int main()
{
    // _Created :  14 May 2024 ||   22:00:14
    // _File    :  B_Relatively_Prime_Pairs.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}