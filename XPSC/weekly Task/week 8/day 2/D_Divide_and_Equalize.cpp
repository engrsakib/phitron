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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<ll, ll> cnt;
        ll i = 0;
        while (i < n)
        {

            ll j = 2;
            while (j * j <= a[i])
            {
                if (a[i] % j == 0)
                {
                    while (a[i] % j == 0)
                    {
                        cnt[j]++;
                        a[i] /= j;
                    }
                }
                j++;
            }
            if (a[i] > 1)
            {
                cnt[a[i]]++;
            }
            i++;
        }

        bool flag = true;

        for (auto [x, y] : cnt)
        {
            if (y % n != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }
};
int main()
{
    // _Created :  12 May 2024 ||   22:15:09
    // _File    :  D_Divide_and_Equalize.cpp
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