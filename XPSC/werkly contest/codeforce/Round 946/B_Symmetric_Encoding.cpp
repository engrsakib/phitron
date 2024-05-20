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
        string str;
        cin >> str;

        set<char> st(str.begin(), str.end());
        string str2(st.begin(), st.end());

        ll size = str2.size();

        map<char, char> mp;

        ll j = 0;
        while (j < size)
        {
            mp[str2[j]] = str2[size - 1 - j];
            j++;
        }

        string str3 = str;

        ll k = 0;
        while (k < n)
        {
            str3[k] = mp[str[k]];
            k++;
        }
        cout << str3 << br;
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   21:00:33
    // _File    :  B_Symmetric_Encoding.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}