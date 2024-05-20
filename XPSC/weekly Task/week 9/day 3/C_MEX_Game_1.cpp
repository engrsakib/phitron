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

        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int cnt = 0;

        int i = 0;
        while (i <= n)
        {
            cnt += (freq[i] == 1);
            if ((cnt == 2) || (freq[i] == 0))
            {
                cout << i << br;
                return;
            }
            i++;
        }
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   19:22:45
    // _File    :  C_MEX_Game_1.cpp
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