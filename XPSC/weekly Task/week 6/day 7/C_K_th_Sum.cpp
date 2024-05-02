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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (j < n)
            {
                ans.push_back(a[i] + b[j]);
                j++;
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans[k - 1] << br;
    }
};
int main()
{
    // _Created :  02 May 2024 ||   01:44:01
    // _File    :  C_K_th_Sum.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
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