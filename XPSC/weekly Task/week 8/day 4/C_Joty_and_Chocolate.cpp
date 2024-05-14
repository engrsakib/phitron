#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    ll gcd(ll a, ll b)
    {
        return __gcd(a, b);
    }

    long long lcm(ll a, ll b)
    {
        return ((a / gcd(a, b)) * b);
    }
    void solve()
    {
        ll n, a, b, p, q; 
        cin >> n >> a >> b >> p >> q;
        
        ll ans = 0;
        ll overlap = (n / lcm(a, b));
        ans += ((n / a) * p);
        ans += ((n / b) * q);
        ans -= (overlap * (p + q));
        ans += (overlap * max(p, q));
        cout << ans << '\n';
    }
};
int main()
{
    // _Created :  14 May 2024 ||   19:36:27
    // _File    :  C_Joty_and_Chocolate.cpp
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