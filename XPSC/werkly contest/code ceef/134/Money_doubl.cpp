#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const int N = 1000;
class Solution
{
public:
    void solve()
    {
        ll x;
        ll y;
        cin >> x >> y;
        if (x > N)
        {
            ll a = x;
            int i = 1;
            while (i <= y)
            {
                a *= 2;
                i++;
            }
            cout << a << br;
        }
        else
        {
            ll a = 1000 + x;

            int i = 1;
            while (i < y)
            {
                a *= 2;
                i++;
            }
            cout << a << br;
        }
    }
};
int main()
{
    // _Created :  15 May 2024 ||   20:39:11
    // _File    :  Money_doubl.cpp
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