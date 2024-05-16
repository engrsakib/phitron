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
        vector<int> arr(n + 3);
        bool ans = false;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        
        int i = 1;
        while (i <= n)
        {
            bool right = false;
            for (int j = 2; j <= i + 1; j++)
            {
                if (arr[i] % j != 0)
                {
                    right = true;
                    break;
                }
            }

            if (!right)
            {
                ans = true;
                break;
            }
            i++;
        }

        if (!ans)
        {
            yes;
        }
        else
        {
            no;
        }
    }
};
int main()
{
    // _Created :  15 May 2024 ||   23:49:16
    // _File    :  C_Di_visible_Confusion.cpp
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