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
        string binary;

        cin >> binary;

        // Check if the input is 5 digits

        // Convert binary to decimal
        int decimal = 0;
        for (int i = 0; i < 5; ++i)
        {
            if (binary[i] == '1')
            {
                decimal += pow(2, 4 - i);
            }
        }

        // Output the decimal number
        cout << decimal << endl;
    }
};
signed main()
{
    // _Created :  20 May 2024 ||   01:30:27
    // _File    :  301_Binary_to_Decimal.cpp
    // Writer    :  Md. Nazmus Sakib(engrsakib)
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        Solution obj;
        obj.solve();
    }
    return 0;
}