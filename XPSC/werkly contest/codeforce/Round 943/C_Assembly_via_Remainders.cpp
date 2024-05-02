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
        vector<ll> v(n - 1);
        vector<ll> vv(n);

        random_device ra;
        mt19937 gen(ra());
        uniform_int_distribution<int> dis(1,1000000000);
        vv[0] = dis(gen);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        for (int i = 1; i < n; i++)
        {
            vv[i] = (vv[i - 1] + v[i - 1]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << vv[i] << " ";
        }
        cout << br;
    }
};
int main()
{
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
