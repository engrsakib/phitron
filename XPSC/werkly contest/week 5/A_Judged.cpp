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
        vector<ll> v;
        for (int i = 0; i < 5; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int sum = 0;
        for (int aa : v)
        {
            sum += aa;
        }

        if (sum >= 4)
            yes;
        else
            no;
    }
};
int main()
{
    // _Created :  29 April 2024 ||   22:38:22
    // _File    :  A_Judged.cpp
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