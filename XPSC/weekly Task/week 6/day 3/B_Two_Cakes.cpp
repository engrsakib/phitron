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
        ll n, a, b;
        cin >> n >> a >> b;

        ll l = 1;
        ll r = min(a, b);
        ll ans = 1;
        while (l <= r)
        {
            ll mid = l + (abs(l - r)) / 2;

            if ((a / mid) + (b / mid) >= n)
            {
                l = mid + 1;
                ans = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
};
int main()
{
    // _Created :  28 April 2024 ||   02:20:37
    // _File    :  B_Two_Cakes.cpp
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