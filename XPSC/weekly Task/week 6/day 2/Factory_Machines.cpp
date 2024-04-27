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
        int n = 0;
        ll t = 0;
        cin >> n >> t;
        vector<ll> time(n);

        for(ll i = 0; i < n; i++)
        {
            cin >> time[i];
        }
       
        ll low = 0;
        ll high = 1e18;
        ll time_needed = 0;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            ll products = 0;

            for (ll i : time)
            {
                products += mid / i;
                if (products >= t)
                {
                    break;
                }
            }

            if (products >= t)
            {
                time_needed = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << time_needed << br;
    }
};
int main()
{
    // _Created :  27 April 2024 ||   22:11:56
    // _File    :  Factory_m.cpp
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