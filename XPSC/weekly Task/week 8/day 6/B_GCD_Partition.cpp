#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const ll N = 2e5 + 10;
class Solution
{
public:
    void solve()
    {

        int n;
        cin >> n;
        ll v[N];
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] += v[i - 1];
        }

        ll ans = -1e18;

        int j = 1;
        while (j < n)
        {
            ans = max(ans, __gcd(v[j], v[n] - v[j]));
            j++;
        }
        cout << ans << br;
    }
};
signed main()
{
    // _Created :  16 May 2024 ||   18:26:10
    // _File    :  B_GCD_Partition.cpp
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