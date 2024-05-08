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
        vector<int> v(n);
        vector<int> b(n);
        for (int i; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i; i < n; i++)
        {
            cin >> b[i];
        }

        int initial_deff = -1;
        int zero_deff = -1;
        bool flag = false;

        int i = 0;
        while (i < n - 1)
        {
            if (v[i] < b[i])
            {
                flag = true;
                break;
            }
            if (b[i] != 0)
            {
                if (initial_deff == -1)
                {
                    initial_deff = v[i] - b[i];
                }
                else
                {
                    if (v[i] - b[i] != initial_deff)
                    {
                        flag = true;
                        break;
                    }
                }
            }
            else
            {
                zero_deff = max(zero_deff, v[i] - b[i]);
            }
            i++;
        }
        if (flag)
        {
            no;
            continue;
        }

        if (initial_deff == -1 || zero_deff <= initial_deff)
        {
            yes;
        }
        else
        {
            no;
        }
    }
};
int main()
{
    // _Created :  05 May 2024 ||   03:49:55
    // _File    :  B_Array_Decrements.cpp
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