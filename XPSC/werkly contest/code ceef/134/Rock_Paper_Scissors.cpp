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
        string str;

        int i = 0;
        while (i < n)
        {
            if (str.size() != 0)
            {
                if (s[i] == 'S' and str[str.size() - 1] != 'P')
                {
                    str.push_back('P');
                }
                else if (s[i] == 'R' and str[str.size() - 1] != 'S')
                {
                    str.push_back('S');
                }
                else if (s[i] == 'P' and str[str.size() - 1] != 'R')
                {
                    str.push_back('R');
                }
                else
                {
                    str.push_back('?');
                }
            }
            else
            {
                if (s[i] == 'P')
                {
                    str.push_back('R');
                }
                else if (s[i] == 'R')
                {
                    str.push_back('S');
                }
                else if (s[i] == 'S')
                {
                    str.push_back('P');
                }
            }
            i++;
        }

        int cnt = 0;

        int j = 0;
        while (j < str.size())
        {
            if (str[j] != '?')
            {
                cnt++;
            }
            j++;
        }
        cout << cnt << br;
    }
};
int main()
{
    // _Created :  15 May 2024 ||   20:56:24
    // _File    :  Rock_Paper_Scissors.cpp
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