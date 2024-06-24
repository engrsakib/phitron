#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 5;
bool dp[N];
bool make_it(int n)
{
    dp[1] = true;
    for (int i = 2; i <= n; i++)
    {

        if (i >= 3 && dp[i - 3])
        {
            dp[i] = true;
        }
        else if (i % 2 == 0 && dp[i / 2])
        {
            dp[i] = true;
        }
    }
    return dp[n];
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        memset(dp, false, sizeof(dp));

        if (!make_it(n))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
