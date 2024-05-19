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
        ll total_Member, g_membre, groupe;
        cin >> total_Member >> g_membre >> groupe;

        ll first_member = ((total_Member / g_membre) * (groupe - 1)) + 1;
        ll second_membre = ((total_Member / g_membre) * (groupe));
        cout << first_member << " " << second_membre << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   19:00:10
    // _File    :  253_Group_Distribution.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}