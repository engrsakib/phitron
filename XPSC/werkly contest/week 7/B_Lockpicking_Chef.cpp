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
        ll n, m;
        cin >> n >> m;
        string str, k;
        cin >> str >> k;
        ll cnt = 0;
        ll ans = 1e18;

        ll i = 0;
        while (i < n - m + 1)
        {
            ll j = 0;
            while (j < m)
            {
                ll x = abs(str[i + j] - k[j]);
                if (x >= 5)
                {
                    x = 10 - x;
                }
                cnt += x;
                j++;
            }
            ans = min(ans, cnt);
            cnt = 0;
            i++;
        }
        cout << ans << br;
    }
};
int main()
{
    // _Created :  12 May 2024 ||   21:08:08
    // _File    :  B_Lockpicking_Chef.cpp
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