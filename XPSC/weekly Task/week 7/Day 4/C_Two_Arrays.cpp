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
        int ar[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int b[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(ar, ar + n);
        sort(b, b + n);
        int ans = 0;
        int i = n - 1;
        while (i >= 0)
        {
            if (ar[i] > b[i] or b[i] - ar[i] > 1)
            {
                ans = 1;
                break;
            }
            i--;
        }

        if (ans == 0)
            yes;
        else
            no;
    }
};
int main()
{
    // _Created :  06 May 2024 ||   21:01:32
    // _File    :  C_Two_Arrays.cpp
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