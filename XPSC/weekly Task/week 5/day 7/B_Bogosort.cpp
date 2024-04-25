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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (v.size() == 1)
        {
            cout << v[0] << br;
        }
        else
        {

            sort(v.rbegin(), v.rend());
            
            for (ll a : v)
            {
                cout << a << " ";
            }
            cout << br;
        }
    }
};
int main()
{
    // _Created :  25 April 2024 ||   00:22:54
    // _File    :  B_Bogosort.cpp
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