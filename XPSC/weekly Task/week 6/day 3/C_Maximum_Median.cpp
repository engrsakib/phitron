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
        ll n, k;
        cin >> n >> k;
        vector<ll> arry(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arry[i];
        }

        sort(arry.begin(), arry.end());

        ll low = 1;
        ll high = 2e9;
        ll ans = 0;
        ll mid = 0;

        while (low <= high)
        {
            mid = low + abs(low - high) / 2;
            ll need = 0;

            for (ll i = n / 2; i < n; i++)
            {
                if (mid >= arry[i])
                {
                    need += abs(arry[i] - mid);
                }

                else if (need >= k)
                {
                    break;
                }
            }

            if (need <= k)
            {
                low = mid + 1;
                ans = mid;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }
};
int main()
{
    // _Created :  28 April 2024 ||   02:35:53
    // _File    :  C_Maximum_Median.cpp
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