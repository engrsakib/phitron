#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    bool is_it_possible(int t, int n, int x, int y)
    {
        if (t < min(x, y))
            return false;

        int cnt = 1;
        t -= min(x, y);
        cnt += t / x + t / y;

        return cnt >= n;
    }

    void solve()
    {

        int n, x, y;
        cin >> n >> x >> y;

        int l = 0;
        int r = max(x, y) * n, mid;

        while (l + 1 < r)
        {
            mid = l + (r - l) / 2;
            if (is_it_possible(mid, n, x, y))
            {
                r = mid;
            }
            else
            {
                l = mid;
            }
        }
        cout << r;
    }
};
int main()
{
    // _Created :  01 May 2024 ||   19:58:40
    // _File    :  C_Very_Easy_Task.cpp
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