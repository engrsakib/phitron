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
        int N, M, L;

        cin >> N >> M >> L;

        int total_points = N * M;

        int bonus = (total_points * L) / 100;

        int total = total_points + bonus;

        cout << total << " Points" << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   15:22:25
    // _File    :  250_Racing_Moto.cpp
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