#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    bool main_pair(int n, string s)
    {
        int z = 0, o = 0;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '0')
                z++;
            else
                o++;
            i++;
        }
        int Min = min(z, o);
        return Min % 2 == 0;
    }
    void solve()
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (main_pair(n, s))
            cout << "Ramos\n";
        else
            cout << "Zlatan\n";
    }
};
int main()
{
    // _Created :  03 May 2024 ||   21:18:27
    // _File    :  String_Game.cpp
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