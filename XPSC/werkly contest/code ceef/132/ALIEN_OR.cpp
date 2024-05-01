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
        vector<string> str(n);

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        set<int> s;
        for (auto a : str)
        {
            int one = 0;
            int pos = 0;
            for (int i = 0; i < k; i++)
            {
                if (a[i] == '1')
                {
                    one++;
                    pos = i;
                }
            }
            if (one == 1)
            {
                s.insert(pos);
            }
        }
        if (s.size() == k)
            yes;
        else
            no;
    }
};
int main()
{
    // _Created :  01 May 2024 ||   22:07:37
    // _File    :  ALIEN_OR.cpp
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