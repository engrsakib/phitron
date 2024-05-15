#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int N = 1111;
class Solution
{
public:
    int gcd(int a, int b)
    {
        return __gcd(a, b);
    }
    vector<int> v[N];
    void cives()
    {
        int i = 1;
        while (i <= 1000)
        {
            int j = 1;
            while (j <= 1000)
            {
                if (gcd(i, j) == 1)
                {
                    v[i].push_back(j);
                }
                j++;
            }
            i++;
        }
    }
    void solve()
    {
        cives();
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<int> max_Index(N, -1);

        for (int i = 1; i <= n; i++)
        {
            max_Index[a[i]] = i;
        }

        int ans = 0;

        for (int i = 1; i <= 1000; i++)
        {
            if (max_Index[i] == -1)
            {
                continue;
            }

            if (i == 1)
            {
                ans = max(ans, 2 * max_Index[i]);
                continue;
            }

            for (auto p : v[i])
            {
                if (max_Index[p] != -1)
                {
                    ans = max(ans, max_Index[i] + max_Index[p]);
                }
            }
        }
        
        if (ans == 0)
        {
            ans = -1;
        }
        cout << ans << br;
    }
};
int main()
{
    // _Created :  15 May 2024 ||   19:20:54
    // _File    :  D_vrime.cpp
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