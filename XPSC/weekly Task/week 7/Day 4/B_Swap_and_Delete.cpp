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
        string str;
        cin >> str;

        int one = 0;
        int zero = 0;
        int i = 0;
        while (i < str.length())
        {
            if (str[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
            i++;
        }
        int j = 0;
        while (j < str.length())
        {
            if (str[j] == '1')
            {
                if (zero > 0)
                {
                    zero--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (one > 0)
                {
                    one--;
                }
                else
                {
                    break;
                }
            }
            j++;
        }
        cout << zero + one << br;
    }
};
int main()
{
    // _Created :  06 May 2024 ||   21:47:11
    // _File    :  B_Swap_and_Delete.cpp
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