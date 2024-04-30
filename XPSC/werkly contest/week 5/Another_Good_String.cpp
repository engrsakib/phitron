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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        ll count = 1;
        ll ans = 0;
        
        ll i = 0;
        while ( i < n - 1)
        {
            if (s[i] == s[i + 1])
                {count++;}
            else
            {
                ans = max(ans, count);
                count = 1;
            }
            i++;
        }

        ans = max(ans, count);
        char last = s[n - 1];
        cout << ans << " ";

        while (q--)
        {
            char c;
            cin >> c;
            if (c == last)
                count++;
            else
            {
                ans = max(ans, count);
                last = c;
                count = 1;
            }
            cout << max(ans, count) << " ";
        }

        cout << br;
    }
};
int main()
{
    // _Created :  30 April 2024 ||   00:06:52
    // _File    :  Another_Good_String.cpp
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