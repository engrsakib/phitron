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
        ll n, x;
        cin >> n >> x;
        if (n * 2 <= x)
            yes;
        else
            no;
    }
};
int main()
{
    // _Created :  01 May 2024 ||   20:30:51
    // _File    :  ICE_CREAM.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t= 1;
   // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}