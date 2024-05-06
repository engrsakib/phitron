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
        vector<ll> v(n);
        ll sum = 0;
        bool even = false;
        ll odd = false;
        ll i = 0;
        while (i < n)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] & 1)
            {
                odd = true;
            }
            else
            {
                even = true;
            }

            i++;
        }

        if ((even && odd) || sum % n)
            no;
        else
        {
            if ((sum / n) & 1 && odd)
                yes;
            else if (((sum / n) & 1) && even)
                no;
            else
                yes;
        }
    }
};
int main()
{
    // _Created :  05 May 2024 ||   21:09:02
    // _File    :  Take_it_Easy.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your codde here. Read input from STDIN. Prll output to STDOUT */
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