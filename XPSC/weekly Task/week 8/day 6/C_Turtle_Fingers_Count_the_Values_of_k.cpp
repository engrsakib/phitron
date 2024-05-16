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
        ll a, b, l;
        cin >> a >> b >> l;

        ll pw = 1;
        set<ll> st;
        ll i = 0;
        while (i <= 20)
        {
            ll px = 1;
            ll j = 0;
            while (j <= 20)
            {
                if (l % (pw * px) == 0)
                {
                    st.insert(l / (pw * px));
                }
                px *= b;
                if (px > l)
                {
                    break;
                }
                j++;
            }
            pw *= a;
            if (pw > l)
            {
                break;
            }
            i++;
        }
        cout << st.size() << br;
    }
};
signed main()
{
    // _Created :  16 May 2024 ||   15:19:21
    // _File    :  C_Turtle_Fingers_Count_the_Values_of_k.cpp
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