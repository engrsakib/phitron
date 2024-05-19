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
        ll m, n, d, p, q, t;
        cin >> m >> n >> d >> p >> q >> t;
        ll tot_d = m * n * d;
        cout << "Person : " << p << endl;
        cout << "Days : " << tot_d << " Days" << endl;
        cout << "Charge : " << p * t * tot_d << " Taka" << endl;
        cout << endl;

        ll tot_d2 = tot_d * p / (p + q);
        cout << "Person : " << p + q << endl;
        cout << "Days : " << tot_d2 << " Days" << endl;
        cout << "Charge : " << (p + q) * t * tot_d2 << " Taka" << endl;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   18:32:50
    // _File    :  252_Building.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    t = 1;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}