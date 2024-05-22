#include <bits/stdc++.h>

#define br "\n"
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;

class Solution
{
public:
    int count_segments(const string &S, char c)
    {
        int count = 0;
        bool in_segment = false;
        for (char ch : S)
        {
            if (ch == c)
            {
                if (!in_segment)
                {
                    count++;
                    in_segment = true;
                }
            }
            else
            {
                in_segment = false;
            }
        }
        return count;
    }
    void solve()
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int zero_segments = count_segments(S, '0');
        int one_segments = count_segments(S, '1');

        int min_operations = min(zero_segments, one_segments);
        cout << min_operations << br;
    }
};
signed main()
{
    // _Created :  22 May 2024 ||   20:48:18
    // _File    :  Invert_And_Equalize.cpp
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