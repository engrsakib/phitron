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
        int n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k + 1);
        vector<ll> b(k + 1);

        a[0] = 0;
        b[0] = 0;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
        }

        
        for (int j = 0; j < q; j++)
        {
            ll c;
            cin >> c;

            ll l = 0, r = k;
            while (l <= r)
            {
                ll mid = l + r >> 1;
                if (a[mid] > c)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (a[r] == c)
            {
                cout << b[r] << " ";
                continue;
            }
            
            ll ans = b[r] + (c - a[r]) * (b[r + 1] - b[r]) / (a[r + 1] - a[r]);
            
            cout << ans << " ";
        }
        cout << endl;
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   19:49:39
    // _File    :  E_Find_the_Car.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}