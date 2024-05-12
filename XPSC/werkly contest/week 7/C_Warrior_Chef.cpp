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
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll j = n - 1;
        while (j >= 0)
        {
            sum += a[j];
            if (sum >= h)
            {
                break;
            }
            j--;
        }

        if (j != -1)
        {
            cout << a[j] << br;
            return;
        }
        cout << 0 << br;
    }
};
int main()
{
    // _Created :  12 May 2024 ||   21:22:35
    // _File    :  C_Warrior_Chef.cpp
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