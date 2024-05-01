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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        vector<int> sel;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        if ((n + m < 11) or (n < 4 or m < 4))
        {
            cout << "-1\n";
            return;
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        ll ans = 0, cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            sel.push_back(a[i]);
            ans += a[i];
            cnt++;
        }

        for (int i = 0; i < 4; i++)
        {
            sel.push_back(b[i]);
            ans += b[i];
            cnt++;
        }

        int i = 4, j = 4;

        while (cnt < 11 and i < n and j < m)
        {
            if (a[i] > b[j])
            {
                sel.push_back(a[i]);
                // cout<<bat[i]<<" ";
                ans += a[i++];
            }
            else
            {
                sel.push_back(b[j]);
                // cout<<bol[j]<<" ";
                ans += b[j++];
            }
            cnt++;
        }

        while (cnt < 11 and i < n)
        {
            sel.push_back(a[i]);

            ans += a[i++];
            cnt++;
        }

        while (cnt < 11 and j < m)
        {
            sel.push_back(b[j]);

            ans += b[j++];
            cnt++;
        }

        cout << ans << br;
    }
};
int main()
{
    // _Created :  01 May 2024 ||   21:21:21
    // _File    :  GAME_11.cpp
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