#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const ll N = 4e5 + 10;
vector<bool> prime(N + 1, true);
class Solution
{
public:
    void cives()
    {

        for (ll i = 2; i * i <= N; i++)
        {
            if (prime[i])
            {
                for (ll j = i + i; j <= N; j += i)
                {
                    prime[j] = false;
                }
            }
        }
    }
    void solve()
    {
        ll a;
        cin >> a;
        ll ans = 1;
        ll cnt = 0;
        ll i = a + 1;
        while (i <= N)
        {
            if (prime[i])
            {
                ans *= i;
                i += a - 1;
                cnt++;
            }
            if (cnt == 2)
            {
                break;
            }
            i++;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  16 May 2024 ||   16:01:10
    // _File    :  B_Different_Divisors.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Prll output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    obj.cives();
    ll t;
    cin >> t;
    while (t--)
    {
        obj.solve();
    }
    return 0;
}