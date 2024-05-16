#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "Yes\n"
#define no cout << "No\n"
using namespace std;

class Solution
{
public:
    bool check(ll a, ll b)
    {
        if (b == 1)
        {
            return true;
        }

        ll gcd = __gcd(a, b);
        if (gcd == 1)
        {
            return false;
        }
        return check(a, b /  gcd);
    }

    void solve()
    {
        ll n, m;
        cin >> n >> m;
        if (!check(n, m))
        {
            no;
        }
        else
        {
            yes;
        }
    }
};
signed main()
{
    // _Created :  16 May 2024 ||   22:41:44
    // _File    :  Chef_and_Prime_Divisors.cpp
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