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
        ll a, b;
        cin >> a >> b;

        double l = b * log(a);
        double r = a * log(b);

        if (l < r)
        {
            cout << '<' << br;
        }
        else if (l > r)
        {
            cout << '>' << br;
        }
        else
        {
            cout << '=' << br;
        }
    }
};
signed main()
{
    // _Created :  16 May 2024 ||   13:55:02
    // _File    :  B_High_School_Become_Human.cpp
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