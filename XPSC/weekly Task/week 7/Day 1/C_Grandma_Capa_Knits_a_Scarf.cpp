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
        string s;
        cin >> s;
        int ans = 1e9;

        int i = 'a';
        while (i <= 'z')
        {
            int replace = 0;
            int l = 0;
            int r = n - 1;
            while (l <= r)
            {
                if (s[l] != s[r])
                {

                    if (s[r] == i)
                    {
                        r--;
                        replace++;
                    }
                    else if (s[l] == i)
                    {
                        l++;
                        replace++;
                    }
                    else
                    {
                        replace = 1e9;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, replace);
            i++;
        }

        if (ans != 1e9)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
};
int main()
{
    // _Created :  03 May 2024 ||   22:29:28
    // _File    :  C_Grandma_Capa_Knits_a_Scarf.cpp
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