#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    bool is_Prime(ll n)
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
    bool is_Perfect_Square(ll n)
    {
        ll x = sqrtl(n);
        return (x * x) == n;
    }
    void solve()
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll i = 0;
        while(i < n)
        {
            if (is_Prime(sqrtl(a[i])) && is_Perfect_Square(a[i]))
            {
                yes;
            }
            else
            {
                no;
            }
            i++;
        }
    }
};
int main()
{
    // _Created :  12 May 2024 ||   20:39:34
    // _File    :  B_T_primes.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
  //  cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}