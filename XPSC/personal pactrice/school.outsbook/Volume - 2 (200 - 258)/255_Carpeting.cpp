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
        double M, N;
        cin >> M >> N;

        double L = sqrt(N / M / 3);

        double W = 3 * L;

        cout << fixed << setprecision(2);
        cout << "The length is " << L << " meter" << br;
        cout << "The width is " << W << " meter" << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   18:24:14
    // _File    :  255_Carpeting.cpp
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