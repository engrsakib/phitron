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
        ll n, k, b;
        ll m, l;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> t;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        t = v;
        sort(t.begin(), t.end());

        m = n;
        ll x = 0;
        while ( x < n)
        {
            if (t[x] != x)
            {
                m = x;
                break;
            }
            x++;
        }
       
        for (ll i = 0; i < n; i++)
        {
            swap(m, v[i]);
        }
        v.push_back(m);

        l = (k - 1) % (n + 1);

        ll i = (n + 1 - l);
        while (i < (n + 1))
        {
            cout << v[i] << " ";
            i++;
        }

        ll j = 0;
        while (j < (n - l))
        {
            cout << v[j] << " ";
            j++;
        }
        cout << br;
    }
};
int main()
{
    // _Created :  09 May 2024 ||   21:00:11
    // _File    :  C_MEX_Repetition.cpp
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