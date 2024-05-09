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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                one++;
            }
            else
            {
                zero += one;
            }
        }

        int ans = zero;
        int id = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
                id = i;
                break;
            }
        }
        zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                one++;
            }
            else
            {
                zero += one;
            }
        }
        ans = max(ans, zero);
        if (id != -1)
        {
            a[id] = 0;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
                break;
            }
        }
        zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                one++;
            }
            else
            {
                zero += one;
            }
        }
        ans = max(ans, zero);

        cout << ans << br;
    }
};
int main()
{
    // _Created :  09 May 2024 ||   22:38:11
    // _File    :  E_Binary_Inversions.cpp
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