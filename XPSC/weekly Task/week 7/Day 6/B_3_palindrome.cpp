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
        int i = 0;
        int j = 0;
        while (i < n)
        {
            if (j < n)
            {
                cout << "a";
                j++;
            }
            if (j < n)
            {
                cout << "b";
                j++;
            }
            if (j < n)
            {
                cout << "b";
                j++;
            }
            if (j < n)
            {
                cout << "a";
                j++;
            }

            i++;
        }
    }
};
int main()
{
    // _Created :  08 May 2024 ||   17:38:06
    // _File    :  B_3_palindrome.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    //  cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}