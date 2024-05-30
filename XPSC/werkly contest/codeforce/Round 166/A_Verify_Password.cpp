#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

using namespace std;
using namespace __gnu_pbds;
template <typename T> // less -> set and less_equal -> multi_set
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution
{
public:
    bool is_Strong_Password(string password)
    {
        int n = password.length();
        bool seen_Letter = false;
        char last_Digit = '0' - 1;
        char last_Letter = 'a' - 1;

        for (char ch : password)
        {
            if (isdigit(ch))
            {
                if (seen_Letter)
                {
                    return false;
                }
                if (ch < last_Digit)
                {
                    return false;
                }
                last_Digit = ch;
            }
            else if (islower(ch))
            {
                seen_Letter = true;
                if (ch < last_Letter)
                {
                    return false;
                }
                last_Letter = ch;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    void solve()
    {
        int n;
        string password;
        cin >> n >> password;

        if (is_Strong_Password(password))
        {
            yes;
        }
        else
        {
            no;
        }
    }
};
signed main()
{
    //  _Created :  30 May 2024 ||   20:37:47
    // _File    :  A_Verify_Password.cpp
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