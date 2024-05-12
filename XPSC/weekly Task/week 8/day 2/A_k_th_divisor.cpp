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
        ll n, k;
        cin >> n >> k;
        vector<ll> div;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                div.push_back(i);
                if ((n / i) != i)
                {
                    div.push_back(n / i);
                }
            }
        }

        sort(div.begin(), div.end());

        if (div.size() < k)
        {
            cout << -1 << br;
            return;
        }
        cout << div[k - 1] << br;
    }
};
int main()
{
    // _Created :  12 May 2024 ||   20:07:52
    // _File    :  A_k_th_divisor.cpp
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