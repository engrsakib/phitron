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
        string str;
        cin >> str;

        set<ll> one;
        set<ll> two;
        set<ll> three;

        for (ll i = 0; i < n; i++)
        {
            if (str[i] == 'a')
            {
                one.insert(i + 1);
            }
            if (str[i] == 'b')
            {
                two.insert(i + 1);
            }
            if (str[i] == 'c')
            {
                three.insert(i + 1);
            }
        }
        int cnt = 0;
        for (auto x = one.begin(); x != one.end(); x++)
        {
            auto it_B = two.upper_bound(*x);
            auto it_C = three.upper_bound(*it_B);

            if (*x < *it_B and *it_B < *it_C)
            {
                if (two.empty() or three.empty())
                {
                    break;
                }
                if (!two.empty())
                {
                    two.erase(*it_B);
                }
                if (!three.empty())
                {
                    three.erase(*it_C);
                }
                cnt++;
            }
        }
        cout << cnt << br;
    }
};
int main()
{
    // _Created :  08 May 2024 ||   21:58:55
    // _File    :  ABC_Conjecture_3.cpp
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