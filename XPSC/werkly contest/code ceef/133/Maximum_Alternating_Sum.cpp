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
        vector<ll>v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll sum_L = 0;
        ll sum_R = 0;
        
        ll m = n /2;
        for(ll i = 0; i < n; i++)
        {
            if(i < m)
            {
                sum_L += v[i];
            }
            else
            {
                sum_R += v[i];
            }
        }
        cout << (sum_R - sum_L) << br;
    }
};
int main()
{
    // _Created :  08 May 2024 ||   20:49:09
    // _File    :  Maximum_Alternating_Sum.cpp
    //Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
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