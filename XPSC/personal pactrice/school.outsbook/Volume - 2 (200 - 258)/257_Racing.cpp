#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
const double PI = 3.1416;

class Solution
{
public:
    void solve()
    {
        double L;
        double N;

        cin >> L >> N;

        double R = N / (2 * PI * L);

        cout << fixed << setprecision(2) << R << " km" << br;
    }
};
signed main()
{
    // _Created :  19 May 2024 ||   15:08:54
    // _File    :  257_Racing.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //  cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}