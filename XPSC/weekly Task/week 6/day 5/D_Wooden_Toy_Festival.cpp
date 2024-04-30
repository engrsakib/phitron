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
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll ans;
        ll low = 0;
        ll high = 1e18;

        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            int cnt = 1;
            for (int l = 0, r = 1; r < n;)
            {
                if (a[l] + mid + mid >= a[r])
                {
                    r++;
                }
                else
                {
                    cnt++;
                    l = r;
                    r = l + 1;
                }
            }
            if (cnt < 4)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }
};
int main()
{
    // _Created :  30 April 2024 ||   14:42:17
    // _File    :  D_Wooden_Toy_Festival.cpp
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