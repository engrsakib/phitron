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
        string s;
        cin >> s;
        // sort(s.begin(), s.end());

        map<char, ll> m;

        for (ll i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }

        if (m.size() == 1)
        {
            no;
            return;
        }
        yes;
        string xx = s;
        reverse(xx.begin(), xx.end());

        if (xx != s)
        {
            cout << xx << br;
        }
        else
        {
            sort(xx.begin(), xx.end());
            if (xx != s)
            {
                cout << xx << br;
            }
            else
            {
                reverse(xx.begin(), xx.end());
                cout << xx << br;
            }
        }
    }
};
int main()
{
    // _Created :  10 May 2024 ||   20:37:28
    // _File    :  B_Different_String.cpp
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