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
        ll n;
        cin >> n;
        ll MIN = -1;
        ll MAX = 0;
        ll cnt = 0;
        vector<ll> v;
        while (n--)
        {
            ll x;
            cin >> x;
            if (cnt == 0)
            {
                if (MIN == -1)
                {
                    MIN = x;
                    MAX = x;
                    v.push_back(1);
                }
                else if (x >= MAX)
                {
                    MAX = x;
                    v.push_back(1);
                }
                else if (x <= MIN)
                {
                    MAX = MIN;
                    MIN = x;
                    cnt++;
                    v.push_back(1);
                }
                else
                {
                    v.push_back(0);
                }
            }
            else if (x >= MIN and x <= MAX)
            {
                v.push_back(1);
                MIN = x;
            }
            else
            {
                v.push_back(0);
            }
        }
        for (ll a : v)
        {
            cout << a;
        }
        cout << br;
    }
};
int main()
{
    // _Created :  09 May 2024 ||   01:05:03
    // _File    :  B_Keep_it_Beautiful.cpp
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