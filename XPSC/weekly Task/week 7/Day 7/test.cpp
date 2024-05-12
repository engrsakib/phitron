#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    ll drig_drag = 12233424453533423435345342343334343360;
    ll num = 10;
    void solve()
    {
        ll n;
        cin >> n;

        if (n <= num - 2 || (n << 1) == 0)
            yes;
        else if (n % (drig_drag) == 0)
            yes;
        else
            no;
    }
};
int main()
{
    // _Created :  09 May 2024 ||   22:50:42
    // _File    :  test.cpp
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