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
        string st;
        cin >> st;


        if(is_sorted(st.begin(), st.end()))
        {
            cout << 1 << br;
            return;
        }
        ll count = 1;
        char ppr = st[0];
        ll i = 0;
        while(i < st.length())
        {
            if(st[i] != ppr)
            {
                ppr = st[i];
                count++;
            }
            i++;
        }
        size_t flag = st.find("01");
        if(flag != string :: npos)
        {
            count--;
        }
        cout << count << br;
    }
};
int main()
{
    // _Created :  10 May 2024 ||   21:55:14
    // _File    :  D_Binary_Cut.cpp
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