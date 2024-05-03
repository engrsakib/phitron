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
        ll r, ans = 0, k, n;
        cin >> n >> k;
        vector<int> pos, neg;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
            {
                pos.push_back(x);
            }
            else if (x < 0)
            {
                neg.push_back(-x);
            }
        }

        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());
        int i = pos.size() - 1;
        while (i >= 0)
        {
            ans += 2 * pos[i];
            i -= k;
        }
        
        int j = neg.size() - 1;
        while (j >= 0)
        {

            ans += 2 * neg[j];
            j -= k;
        }

        int max_val = 1e9;
        if (pos.empty() and neg.empty())
        {
            max_val = 0;
        }
        else if (pos.empty())
        {
            max_val = neg.back();
        }
        else if (neg.empty())
        {
            max_val = pos.back();
        }
        else
        {
            max_val = max(pos.back(), neg.back());
        }
        ans -= max_val;

        cout << ans << br;
    }
};
int main()
{
    // _Created :  03 May 2024 ||   22:58:31
    // _File    :  C_Minimize_Distance.cpp
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