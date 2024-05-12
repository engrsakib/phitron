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
        double a, b, c;
        cin >> a >> b >> c;
        ll x = ceil(a / b);
        ll y = ceil(a / c);
        if (y - x + 1 != 0)
        {
            cout << (y - x + 1) * -1 << br;
            return;
        }

        cout << 0 << br;
    }
};
int main()
{
    // _Created :  12 May 2024 ||   21:02:45
    // _File    :  A_Work_Smarter_Not_Harder.cpp
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