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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int i = 0;
        int j = 0;
        while (i < n and j < m)
        {
            if (a[i] == b[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        cout << i << br;
    }
};
int main()
{
    // _Created :  02 May 2024 ||   21:12:16
    // _File    :  B_Prefiquence.cpp
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