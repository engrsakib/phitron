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
        int n;
        cin >> n;
        vector<int>v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back((2 * i));
        }
        for(int a : v)
        {
            cout << a << " ";
        }
        cout << br;
    }
};
int main()
{
    // _Created :  06 May 2024 ||   22:18:06
    // _File    :  A_Divisible_Array.cpp
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