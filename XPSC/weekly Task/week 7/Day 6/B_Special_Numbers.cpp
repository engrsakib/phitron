#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
using namespace std;

class Solution
{
public:
    ll power(ll b, ll n)
    {
        ll result = 1;
        while (n)
        {
            if (n % 2 == 1)
            {
                result = (result * b) % mod;
                n--;
            }
            else
            {
                b = (b * b) % mod;
                n /= 2;
            }
        }
        return result % mod;
    }
    void solve()
    {
        ll n, k;
        cin >> n >> k;
        string v;
        while (k)
        {
            if (k % 2 == 0)
                v += '0';
            else
                v += '1';
            k /= 2;
        }
        ll ans = 0;

        ll i = 0;
        while (i < v.size())
        {
            if (v[i] == '1')
            {
                ans += power(n, i);
            }
            ans %= mod;
            i++;
        }
        cout << ans << br;
    }
};
int main()
{
    // _Created :  08 May 2024 ||   19:19:15
    // _File    :  B_Special_Numbers.cpp
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