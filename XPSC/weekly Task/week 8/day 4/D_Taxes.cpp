#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    bool is_prime(ll n)
    {
        if (n == 1)
        {
            return false;
        }
        ll i = 2;
        while ( i * i <= n)
        {
            if (n % i == 0)
            {
                return false;
            }
            i++;
        }

        return true;
    }
    void solve()
    {
        ll n;
        cin >> n;

        if (is_prime(n))
        {
            cout << 1 << br;
        }
        else if (n % 2 == 0)
        {
            cout << 2 << br;
        }
        else
        {
            if (is_prime(n - 2))
            {
                cout << 2 << br;
            }
            else
            {
                cout << 3 << br;
            }
        }
    }
};
int main()
{
    // _Created :  14 May 2024 ||   20:07:48
    // _File    :  D_Taxes.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
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