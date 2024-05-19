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
        double as;
        cin >> as;

        cout << "Floor " << floor(as) << br;
        cout << "Ceil " << ceil(as) << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   18:37:15
    // _File    :  254_Ceiling_and_Floor.cpp
    //Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}