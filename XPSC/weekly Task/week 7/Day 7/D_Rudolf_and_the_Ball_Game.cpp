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
        ll n, m, k;
        cin >> n >> m >> k;
        set<ll> st1;
        set<ll> st2;
        st1.insert(k);
        while (m--)
        {
            ll a;
            char b;
            cin >> a >> b;
            if (b != '1')
            {
                for (auto k : st1)
                {
                    st2.insert((k + a - 1) % n + 1);
                }
            }
            else if (b != '0')
            {
                for (auto k : st1)
                {
                    st2.insert((k - a + n - 1) % n + 1);
                }
            }
            st1 = st2;
            st2.clear();
        }
        //cout << st1.size() << br;
        for (auto i : st1)
        {
            cout << i << " ";
        }
        cout << br;
    }
};
int main()
{
    // _Created :  09 May 2024 ||   18:40:24
    // _File    :  D_Rudolf_and_the_Ball_Game.cpp
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